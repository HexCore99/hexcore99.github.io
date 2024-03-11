import os

def rename_images(folder_path, base_name="prb", sort_by="name"):
    """
    Renames images in a folder with the given base name in ascending order.

    Args:
        folder_path (str): The path to the folder containing images.
        base_name (str, optional): The base name for the renamed files. Defaults to 'prb'.
        sort_by (str, optional): How to sort images before renaming.
                                 Can be 'name', 'created', or 'modified'. 
                                 Defaults to 'name'.
    """

    files = [f for f in os.listdir(folder_path) if os.path.isfile(os.path.join(folder_path, f))]

    if sort_by == "created":
        files.sort(key=lambda f: os.path.getctime(os.path.join(folder_path, f)))
    elif sort_by == "modified":
        files.sort(key=lambda f: os.path.getmtime(os.path.join(folder_path, f)))
    else:  # Sort by name
        files.sort()

    for i, filename in enumerate(files):
        old_filepath = os.path.join(folder_path, filename)
        new_filename = f"{base_name}{i + 1}{os.path.splitext(filename)[1]}"
        new_filepath = os.path.join(folder_path, new_filename)
        os.rename(old_filepath, new_filepath)

# Example usage:
folder_path = r"C:\Users\siyam\Documents\GitHub\New folder\siyam.github.io\Loop\loop_Images" 

base_name = "prb" 
sort_by = "created"  
rename_images(folder_path, base_name, sort_by)
