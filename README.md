# Eglof - A CSV-based filter plugin

## About the name

"Eglof" is the word "Folge" spelled backwards, which is the German word for "sequence".
## Description
<img width="2388" height="1598" alt="Eglof UI" src="https://github.com/user-attachments/assets/2201cfa7-ca9d-472d-87e1-32b7979277aa" />
Eglof is a filter plugin that allows for the choosing of up to 100 peaks or cuts, offering an alternative approach to EQ. The peaks correspond to values in the chosen column of an uploaded CSV file. 
Eglof is currently available in the following formats:
* VST3 (MacOS, Windows, Linux)
* AU (MacOS)
* AAX (coming soon!)

## Instructions for Use
Make sure you have selected stereo input. Click on the "Click to choose a CSV" button and choose a CSV file from your device. The data in the CSV file will be processed as floating-point numbers, which are then min-max scaled to correspond to peaks or cuts (depending on the value chosen via the gain slider) between 20Hz and 20kHz. Once you have chosen a CSV file, select one of its columns from the dropdown menu. You can adjust the factor by which the gains of the peaks are scaled to a factor betweek -6dB and +6dB using the slider. Adjust the slider slowly when increasing the gain or you may experience unexpected clipping! Large files may cause performance issues.


## License
Copyright (C) Quargs - All Rights Reserved

Unauthorized copying of this file, via any medium is strictly prohibited
Proprietary and confidential
Written by Quargs Greene quargsgreene@gmail.com , 2025-09-06


