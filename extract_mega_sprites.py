#!/usr/bin/env python3
""" Extract sprites from MEGA follower spritesheet. """

from PIL import Image

def process_spritesheet(filename):
    # Load the image
    img = Image.open(filename)
    
    # Dimensions of the sections and squares
    section_width, section_height = 64, 128
    square_size = 32
    
    # Output dimensions for the compiled rectangles
    output_width, output_height = 192, 32
    
    # Create a list to store the processed images
    processed_images = []
    
    # Loop through each 64x128 section
    for i in range(0, img.width, section_width):
        for j in range(0, 3):
            # Extract the 64x128 section
            section = img.crop((i, j, i + section_width, j + section_height))
            
            # Create an empty 192x32 image
            output_image = Image.new("RGBA", (output_width, output_height))
            
            # Extract and paste the top row
            row = 1
            x_pos = 0
            # crop the tile
            x_pos = x_pos * square_size
            y_pos = section_height - (square_size * row)
            square = section.crop(x_pos, y_pos, x_pos + square_size, y_pos + square_size)
            # paste the cropped tile in the right spot
            out_pos = 0
            output_image.paste(square, (square_size*out_pos, 0))
            # increment x
            x_pos = 1
            x_pos = x_pos * square_size
            square = section.crop(x_pos, y_pos, x_pos + square_size, y_pos + square_size)
            # increment out_pos and paste next square
            out_pos = 1
            output_image.paste(square, (square_size*out_pos, 0))
            
            # Extract and paste the bottom row
            row = 4
            x_pos = 0
            # crop the tile
            x_pos = x_pos * square_size
            y_pos = section_height - (square_size * row)
            square = section.crop(x_pos, y_pos, x_pos + square_size, y_pos + square_size)
            # paste the cropped tile in the right spot
            out_pos = 2
            output_image.paste(square, (square_size*out_pos, 0))
            # increment x
            x_pos = 1
            x_pos = x_pos * square_size
            square = section.crop(x_pos, y_pos, x_pos + square_size, y_pos + square_size)
            # increment out_pos and paste next square
            out_pos = 3
            output_image.paste(square, (square_size*out_pos, 0))
            
            # Extract and paste the second row
            row = 2
            x_pos = 0
            # crop the tile
            x_pos = x_pos * square_size
            y_pos = section_height - (square_size * row)
            square = section.crop(x_pos, y_pos, x_pos + square_size, y_pos + square_size)
            # paste the cropped tile in the right spot
            out_pos = 4
            output_image.paste(square, (square_size*out_pos, 0))
            # increment x
            x_pos = 1
            x_pos = x_pos * square_size
            square = section.crop(x_pos, y_pos, x_pos + square_size, y_pos + square_size)
            # increment out_pos and paste next square
            out_pos = 5
            output_image.paste(square, (square_size*out_pos, 0))
            
            # Add the new image to our list (or save it, if preferred)
            processed_images.append(output_image)

    return processed_images

# Test the function
images = process_spritesheet("path_to_your_spritesheet.png")

# Optional: save the processed images
for idx, image in enumerate(images):
    image.save(f"output_{idx}.png")
