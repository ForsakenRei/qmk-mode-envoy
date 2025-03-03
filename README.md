# QMK Firmware for Mode Envoy Hotswap PCB

## Flash Guide

1. Hold `ESC` and plug the board in, or press `\` on layer 3.
2. Flash the firmware

### QMK CLI
`qmk compile -kb mode/m256wh -km shigure -j 32`

`qmk flash -kb mode/m256wh -km shigure -j 32`
