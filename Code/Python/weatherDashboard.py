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

import json
import pandas as pd 
import requests as rq 
import tkinter as tk 


# Main program function
def main():
    global df
    global weatherData
    try:
        # Gets rawData from weather.gov API
        apiResponse = rq.get(url="https://api.weather.gov/gridpoints/FWD/89,104/forecast")
        rawData = json.loads(apiResponse.text)
        weatherData = rawData["properties"]["periods"]
        parsedData = []
        
        # Iterate through weatherData to parse it to store in a list
        for period in weatherData:
            name = period["name"]
            temperature = period["temperature"]
            precipitation = period["probabilityOfPrecipitation"]["value"]
            windSpeed = period["windSpeed"]
            windDir = period["windDirection"]
            shortForecast = period["shortForecast"]
            detailedForecast = period["detailedForecast"]
            
            # store parsed data into a list
            parsedData.append([name, temperature, precipitation, windSpeed, windDir, shortForecast, detailedForecast])
            
        # create a pandas dataframe from parsed data
        df = pd.DataFrame(parsedData, columns=["Name", "Temperature", "Chance of Precipitation", "Wind Speed", "Wind Direction", "Short Forecast", "Detailed Forecast"])
        print(df)
    except Exception as e:
        print(f"Error: {e}")

def display_window():
    # TODO: build the dashboard
    window = tk.Tk()
    window.geometry("1280x720")


if __name__ == "__main__":
    main()