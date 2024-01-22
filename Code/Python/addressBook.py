# Function to add a contact to the address_book dict.
def add_contact(address_book):
    name = input("Enter name: ")
    phone = input("Enter phone number: ")
    address = input("Enter address: ")
    address_book[name] = {"Phone" : phone, "Address" : address, }


# Function to remove contacts from the address_book dict.
def remove_contact(address_book):
    display_contacts(address_book)
    removeThis = input("Which contact do you want to remove?: ")
    if removeThis in address_book:
        del address_book[removeThis]
        print("\nContact removed.\n")
        display_contacts(address_book)
    else:
        print("\nContact does not exist.\n")
        display_contacts(address_book)


# Function to display the items in the address_book dict.
def display_contacts(address_book):
    if not address_book:
        print("\nAddress book is empty.")
    else:
        print("\nContacts:")
        for name in sorted(address_book.keys()):
            print(f"Name: {name}\n", f"Phone: {address_book[name]['Phone']}\n", f"Address: {address_book[name]['Address']}\n", "\n")


# Main function to run the address book program.
def main():
    address_book = {}
    while True:
        print("\n\n~~~~~~MENU~~~~~~")
        print("Enter 1 to add contact.\nEnter 2 to display contacts.\nEnter 3 to remove a contact.\nEnter 0 to quit.")
        print("~~~~~~~~~~~~~~~~\n")
        choice = int(input("Enter choice: "))
        
        options = {
            1: add_contact,
            2: display_contacts,
            3: remove_contact,
            0: lambda _: exit()
        }
        
        if choice in options:
            options[choice](address_book)
        else:
            print("Invalid input.")


# init program
if __name__ == "__main__":
    main()