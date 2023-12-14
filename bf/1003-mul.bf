,          ; Read the first digit into the first cell
>+++++++++ ; Move to the second cell and set it to 8
[->+<]      ; Move back to the first cell and add 8
>>          ; Move to the third cell
++++++++[->++++++<]> ; Set the fourth cell to 10
<[-<+>>-]   ; Multiply the first and second cells and store the result in the third cell
<.         ; Move back to the first cell and print the result

