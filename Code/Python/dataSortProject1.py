import pandas as pd 

# Load the dataset
df = pd.read_csv("C:\\Users\\cqs152\\Downloads\\Code\\Python\\Data\\books.csv")

# Sort the dataset
df_sorted_by_title = df.sort_values("title")
df_sorted_by_rating = df.sort_values("average_rating", ascending=False)
df_sorted_by_author = df.sort_values("authors")
df_sorted_by_date_published = df.sort_values("publication_date", ascending=False)


# Function to show and handle more choices
def more_options():
    print("\n~~~~~MENU~~~~~")
    print("Enter 1 to sort by title.\nEnter 2 to sort by author.")
    print("Enter 3 to sort by date published.\nEnter 4 to sort by rating.")
    print("Enter 5 to go back.\nEnter 0 to quit.")
    print("~~~~~~~~~~~~~~\n\n")
    
    try:
        choice = int(input("Enter choice: "))
        moreOptions = {
            1: lambda: print(df_sorted_by_title),
            2: lambda: print(df_sorted_by_author),
            3: lambda: print(df_sorted_by_date_published),
            4: lambda: print(df_sorted_by_rating),
            5: lambda: "back",
            0: quit
        }
        
        if choice in moreOptions:
            return moreOptions[choice]()
        else:
            print("Invalid input.")
    except ValueError:
        print("Please enter a valid number.")


# Main program display and handle choices.
def main():
    while True:
        print("\n~~~~~MENU~~~~~")
        print("Enter 1 display the first few 5 rows.\nEnter 2 to show the authors with the most books.")
        print("Enter 3 to show the most common ratings.\nEnter 4 for more options.")
        print("Enter 0 to quit.\n~~~~~~~~~~~~~~\n\n" )
        
        try:
            choice = int(input("Enter choice: "))
            print("")
            options = {
                1: lambda: print(df.head()),
                2: lambda: print(df["authors"].value_counts()),
                3: lambda: print(df["average_rating"].value_counts()),
                4: lambda: more_options(),
                0: quit
            }
            
            if choice in options:
                result = options[choice]()
                if result == "back":
                    continue
            else:
                print("Invalid input.")
        except ValueError:
            print("Please enter a valid number.")

if __name__ == "__main__":
    main()