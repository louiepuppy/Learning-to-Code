# Step 1: Choose a Weather API
# https://api.weather.gov/gridpoints/FWD/89,104/forecast
# https://api.weather.gov/gridpoints/FWD/89,104/forecast/hourly

# Step 2: Understand the API Documentation

# Step 3: Write Python Code to Fetch Weather Data
# Use the 'requests' library to make a GET request to the API and fetch weather data.

# Step 4: Parse the Returned Data
# The data returned is usually in JSON format. Parse this data to extract the information you need.

# Step 5: Build the Dashboard
# Use a library like Tkinter to build a simple GUI. Display the fetched weather data on this dashboard.

import pandas as pd 
import requests as rq 
import tkinter as tk 


def main():
    # TODO: rewrite all this i think its bad
    apiResponse = rq.get(url="https://api.weather.gov/gridpoints/FWD/89,104/forecast")
    weatherData = apiResponse.text
    
    with open("Learning-to-Code\\Code\\Python\\Data\\weatherData.json", "w") as file:
        file.write(weatherData)
        # FIXME: is broken
        df = pd.read_json("Learning-to-Code\\Code\\Python\\Data\\weatherData.json")


def display_window():
    # TODO: build the dashboard
    window = tk.Tk()


if __name__ == "__main__":
    main()