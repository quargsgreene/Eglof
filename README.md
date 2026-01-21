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
Make sure you have selected stereo input. Click on the "Click to choose a CSV" button and choose a CSV file from your device. Choose a column from the CSV Column -> Frequency Mapping dropdown. The data in the CSV file will be processed as floating-point numbers, which are then min-max scaled to correspond to peaks or cuts (depending on the value chosen via the gain slider) between 20Hz and 20kHz. Once you have chosen a CSV file, select one of its columns from the dropdown menu. You can adjust the factor by which the gains of the peaks are scaled to a factor betweek -24dB and +24dB using the slider. Adjust the slider slowly when increasing the gain or you may experience unexpected clipping! Large files may cause performance issues.

##Examples:
Consider the following CSV file with a single row and column:
| Platypus |
|---|
| 20 |

When the file is initially loaded and a column is chosen, the curve will be flat.
<img width="1202" height="784" alt="Screenshot 2026-01-20 at 4 18 59 PM" src="https://github.com/user-attachments/assets/d5a1738a-f8e7-41a2-a48e-516778effef6" />

Adjust the gain to a positive value to get a frequency boost around 20Hz lke so:
<img width="1194" height="786" alt="Screenshot 2026-01-20 at 4 19 20 PM" src="https://github.com/user-attachments/assets/5b0ed719-591b-4006-aaf3-0a46d73295ae" />

Similarly the gain can be adjusted to a negative value to achieve the following result:
<img width="1189" height="799" alt="Screenshot 2026-01-20 at 4 19 31 PM" src="https://github.com/user-attachments/assets/d494ed1f-45e3-4d6e-9e64-815d5c41f2f0" />

## License
Copyright (C) Quargs - All Rights Reserved

Unauthorized copying of this file, via any medium is strictly prohibited
Proprietary and confidential
Written by Quargs Greene quargsgreene@gmail.com , 2025-09-06






