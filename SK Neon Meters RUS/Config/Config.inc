; ====================================
; ========== SK NEON METERS ==========
; ====================================
; ========== CONFIG FILE =============
; ====================================

[Variables]

; ====================================
; ========== LAYOUT ==================
; ====================================

;Switch between these two formats for 24 hr or 12 hr clock.
; 24 Hour format
ClockFormat=%H:%M
; 12 Hour format
;ClockFormat=%#I:%M %p

; ====================================
; ========== EDITABLE COLOURS ========
; ====================================

; Define colours used for the graphs and components. These are in RGB, so just change the values from 0-255
GPUcolor = 255,59,0		; GPU:		Bright red
GPU2color = 240,255,0		; GPU 2:	Yellow
CPUcolor = 20,144,255		; CPU:		Light blue
MEMcolor = 211,0,201		; Memory:	Magenta
NETcolor = 255,140,0		; Network:	Orange
HDDcolor = 0,209,66		; Drives:	Light Green

;Defines the background colour for graphs. Note the 4th value is the alpha channel.
BACKcolor = 0,0,0,0		; Transparent
;BACKcolor = 0,0,0,128		; 50% black
;BACKcolor = 0,0,0,255		; Solid black
