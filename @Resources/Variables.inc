[Variables]

;==========[Day]====================
; Display settings for weekday name
Day_Language=Arabic
Day_Scale=1.5
Day_TextSize=60
Day_Font=Amiri
Day_Color=171,152,181,255
Day_Format=%A

;==========[Date (Gregorian)]====================
; Western calendar date display
DateG_Language=English
DateG_Scale=0.8
DateG_TextSize=25
DateG_Font=Arial Rounded MT
DateG_Color=171,152,181,255
DateG_Format=%d  %B  %Y

;==========[Date (Hijri)]====================
; Islamic calendar date display
DateH_Language=English
DateH_Scale=0.8
DateH_TextSize=25
DateH_Font=Arial Rounded MT
DateH_Color=171,152,181,255
DateH_Format=%#x
DateH_FormatLocale=ar-SA
;(ar-SA for Saudi Arabia date format)

;==========[Clock]====================
; Time display
Clock_Language=English
Clock_Scale=0.8
Clock_TextSize=25
Clock_Font=Arial Rounded MT
Clock_Color=171,152,181,255
Clock_Format=%I:%M:%S %p
;(for 24h format use %H:%M:%S)
;(for 12h format use %I:%M:%S %p)

;==============================
; NOTES:
; - For more fonts, download their .otf or .ttf file inside Fonts folder then reference their names here
; - Many fonts are Windows-built-in eg. Arial Rounded MT, DecoType Thuluth II and Old Antic Decorative
; - Colors are in RGBA format (Red,Green,Blue,Opacity)
; - Use overlay color-picker (double-click) on skin to change skin's colors
; - Refresh skin after changes (Right-click on Skin > Refresh)
;
;
; - More modification can be done inside each skin script (.ini)
; - Modifing 'DateH_Format' may not result in what you expect. %#x is one of few commands that FormatLocale can effect, but it gives back a long text, and so Date(Hijri).ini will break it into pieces then assemble it again.
;
; Fonts guide:
; - https://docs.rainmeter.net/tips/fonts-guide
; Formatting guide:
; - https://docs.rainmeter.net/manual/measures/time/#FormatCodes
; Microsoft's FormatLocale IDs:
; - https://learn.microsoft.com/en-us/openspecs/windows_protocols/ms-lcid/a9eac961-e77d-41a6-90a5-ce1a8b0cdb9c