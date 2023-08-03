# Hotel Reservation System

This project is a simple and efficient C++ hotel reservation system. It provides a command-line interface that allows users to manage hotel room bookings.

## Features

- **Add a Customer**: Book a room for a specific customer.
- **View All Rooms**: See the list of all rooms, including those booked.
- **Reset List of Rooms**: Reset all rooms to their default state.
- **Display Empty Rooms**: View a list of all available rooms.
- **Delete Customer from Room**: Remove a customer's booking from a specific room.
- **Find Room from Customer Name**: Find a room based on a customer's name.
- **Store Data into a File**: Save the current state of the hotel's bookings.
- **Load Data from File**: Load previously saved booking data.
- **View Rooms Ordered Alphabetically**: Display rooms sorted by the main customer's name.

## How to Use

1. Compile the program using a C++ compiler.
2. Run the compiled executable.
3. Enter `I` to initialize the program and display the main menu.
4. Follow the on-screen instructions to select an option from the menu.
5. Use the corresponding keys (`A`, `V`, `e`, `E`, etc.) to perform various operations related to hotel bookings.

## Code Structure

The code is organized into various functions, each responsible for a specific feature, making it easy to understand and modify:

- `DisplayMainMenu()`: Displays the main menu.
- `AddCustomer()`: Handles customer addition.
- `ViewAllRooms()`: Views all rooms.
- `ResetAllRooms()`: Resets all rooms.
- `ViewEmptyRooms()`: Lists empty rooms.
- ... and more!
