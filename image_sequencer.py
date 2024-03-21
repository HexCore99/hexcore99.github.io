# import os

# def rename_images(folder_path, base_name="prb", sort_by="date"):
#     """
#     Renames images in a folder with the given base name in ascending order.

#     Args:
#         folder_path (str): The path to the folder containing images.
#         base_name (str, optional): The base name for the renamed files. Defaults to 'prb'.
#         sort_by (str, optional): How to sort images before renaming.
#                                  Can be 'name', 'created', or 'modified'. 
#                                  Defaults to 'name'.
#     """

#     files = [f for f in os.listdir(folder_path) if os.path.isfile(os.path.join(folder_path, f))]

#     if sort_by == "created":
#         files.sort(key=lambda f: os.path.getctime(os.path.join(folder_path, f)))
#     elif sort_by == "modified":
#         files.sort(key=lambda f: os.path.getmtime(os.path.join(folder_path, f)))
#     else:  # Sort by name
#         files.sort()

#     for i, filename in enumerate(files):
#         old_filepath = os.path.join(folder_path, filename)
#         new_filename = f"{base_name}{i + 1}{os.path.splitext(filename)[1]}"
#         new_filepath = os.path.join(folder_path, new_filename)
#         os.rename(old_filepath, new_filepath)

# # Example usage:
# folder_path = r"C:\Users\siyam\Documents\GitHub\siyam.github.io\Functions\Function_Images" 


# base_name = "prb" 
# sort_by = "created"  
# rename_images(folder_path, base_name, sort_by)



# ********************************************************************Sorting in Descending Order ********************************************************************

# import os

# def rename_images(folder_path, base_name="prb", sort_by="name"):
#     """
#     Renames images in a folder with the given base name in ascending or descending order.

#     Args:
#         folder_path (str): The path to the folder containing images.
#         base_name (str, optional): The base name for the renamed files. Defaults to 'prb'.
#         sort_by (str, optional): How to sort images before renaming.
#                                  Can be 'name', 'created', or 'modified'. 
#                                  Defaults to 'name'.
#     """

#     files = [f for f in os.listdir(folder_path) if os.path.isfile(os.path.join(folder_path, f))]

#     if sort_by == "created":
#         files.sort(key=lambda f: os.path.getctime(os.path.join(folder_path, f)), reverse=True)
#     elif sort_by == "modified":
#         files.sort(key=lambda f: os.path.getmtime(os.path.join(folder_path, f)), reverse=True)
#     else:  # Sort by name
#         files.sort(reverse=True)

#     for i, filename in enumerate(files):
#         old_filepath = os.path.join(folder_path, filename)
#         new_filename = f"{base_name}{len(files) - i}{os.path.splitext(filename)[1]}"
#         new_filepath = os.path.join(folder_path, new_filename)
#         os.rename(old_filepath, new_filepath)

# # Example usage (remains the same):
# folder_path = r"C:\Users\siyam\Documents\GitHub\siyam.github.io\Functions\Function_Images" 
# base_name = "prb" 
# sort_by = "created"  
# rename_images(folder_path, base_name, sort_by)





#******************************************************

import os

images_folder = "images"  # Replace 'images' with the actual name of your folder

count = 1
for filename in os.listdir( r"C:\Users\siyam\Documents\GitHub\siyam.github.io\Functions\Function_Images" ):
    if filename.endswith('.jpg') or filename.endswith('.png') or filename.endswith('.jpeg'):  # Modify for other image extensions
        src = os.path.join( r"C:\Users\siyam\Documents\GitHub\siyam.github.io\Functions\Function_Images" , filename)
        new_filename = f"{str(count).zfill(2)}.jpg"  # Change '.jpg' to your desired extension
        dst = os.path.join( r"C:\Users\siyam\Documents\GitHub\siyam.github.io\Functions\Function_Images" , new_filename)
        os.rename(src, dst)
        count += 1

print("Files renamed successfully!")
