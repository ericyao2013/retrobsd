static const unsigned char vga[] = {

    16, // lpc
    1, // bpl
    32, // start
    0x7f, // end
    1, // bpp

//  32 $20 'space'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  33 $21 'exclam'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00011000,
    0b00111100,
    0b00111100,
    0b00111100,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00000000,
    0b00011000,
    0b00011000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  34 $22 'quotedbl'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b01100110,
    0b01100110,
    0b01100110,
    0b00100100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  35 $23 'numbersign'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00110110,
    0b00110110,
    0b01111111,
    0b00110110,
    0b00110110,
    0b00110110,
    0b01111111,
    0b00110110,
    0b00110110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  36 $24 'dollar'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00011000,
    0b00011000,
    0b00111110,
    0b01100011,
    0b01000011,
    0b00000011,
    0b00111110,
    0b01100000,
    0b01100000,
    0b01100001,
    0b01100011,
    0b00111110,
    0b00011000,
    0b00011000,
    0b00000000,
    0b00000000,
//  37 $25 'percent'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01000011,
    0b01100011,
    0b00110000,
    0b00011000,
    0b00001100,
    0b00000110,
    0b01100011,
    0b01100001,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  38 $26 'ampersand'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00011100,
    0b00110110,
    0b00110110,
    0b00011100,
    0b01101110,
    0b00111011,
    0b00110011,
    0b00110011,
    0b00110011,
    0b01101110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  39 $27 'quotesingle'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00001100,
    0b00001100,
    0b00001100,
    0b00000100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  40 $28 'parenleft'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00110000,
    0b00011000,
    0b00001100,
    0b00001100,
    0b00001100,
    0b00001100,
    0b00001100,
    0b00001100,
    0b00011000,
    0b00110000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  41 $29 'parenright'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00001100,
    0b00011000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00011000,
    0b00001100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  42 $2a 'asterisk'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01100110,
    0b00111100,
    0b11111111,
    0b00111100,
    0b01100110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  43 $2b 'plus'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00011000,
    0b00011000,
    0b01111110,
    0b00011000,
    0b00011000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  44 $2c 'comma'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00001100,
    0b00000000,
    0b00000000,
    0b00000000,
//  45 $2d 'hyphen'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01111111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  46 $2e 'period'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00011000,
    0b00011000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  47 $2f 'slash'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01000000,
    0b01100000,
    0b00110000,
    0b00011000,
    0b00001100,
    0b00000110,
    0b00000011,
    0b00000001,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  48 $30 'zero'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00011100,
    0b00110110,
    0b01100011,
    0b01100011,
    0b01101011,
    0b01101011,
    0b01100011,
    0b01100011,
    0b00110110,
    0b00011100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  49 $31 'one'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00011000,
    0b00011100,
    0b00011110,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b01111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  50 $32 'two'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111110,
    0b01100011,
    0b01100000,
    0b00110000,
    0b00011000,
    0b00001100,
    0b00000110,
    0b00000011,
    0b01100011,
    0b01111111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  51 $33 'three'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111110,
    0b01100011,
    0b01100000,
    0b01100000,
    0b00111100,
    0b01100000,
    0b01100000,
    0b01100000,
    0b01100011,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  52 $34 'four'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00110000,
    0b00111000,
    0b00111100,
    0b00110110,
    0b00110011,
    0b01111111,
    0b00110000,
    0b00110000,
    0b00110000,
    0b01111000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  53 $35 'five'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01111111,
    0b00000011,
    0b00000011,
    0b00000011,
    0b00111111,
    0b01100000,
    0b01100000,
    0b01100000,
    0b01100011,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  54 $36 'six'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00011100,
    0b00000110,
    0b00000011,
    0b00000011,
    0b00111111,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  55 $37 'seven'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01111111,
    0b01100011,
    0b01100000,
    0b01100000,
    0b00110000,
    0b00011000,
    0b00001100,
    0b00001100,
    0b00001100,
    0b00001100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  56 $38 'eight'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111110,
    0b01100011,
    0b01100011,
    0b01100011,
    0b00111110,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  57 $39 'nine'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111110,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01111110,
    0b01100000,
    0b01100000,
    0b01100000,
    0b00110000,
    0b00011110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  58 $3a 'colon'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00011000,
    0b00011000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00011000,
    0b00011000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  59 $3b 'semicolon'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00011000,
    0b00011000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00011000,
    0b00011000,
    0b00001100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  60 $3c 'less'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01100000,
    0b00110000,
    0b00011000,
    0b00001100,
    0b00000110,
    0b00001100,
    0b00011000,
    0b00110000,
    0b01100000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  61 $3d 'equal'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01111110,
    0b00000000,
    0b00000000,
    0b01111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  62 $3e 'greater'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000110,
    0b00001100,
    0b00011000,
    0b00110000,
    0b01100000,
    0b00110000,
    0b00011000,
    0b00001100,
    0b00000110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  63 $3f 'question'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111110,
    0b01100011,
    0b01100011,
    0b00110000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00000000,
    0b00011000,
    0b00011000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  64 $40 'at'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111110,
    0b01100011,
    0b01100011,
    0b01111011,
    0b01111011,
    0b01111011,
    0b00111011,
    0b00000011,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  65 $41 'A'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00011100,
    0b00110110,
    0b01100011,
    0b01100011,
    0b01111111,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  66 $42 'B'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111111,
    0b01100110,
    0b01100110,
    0b01100110,
    0b00111110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b00111111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  67 $43 'C'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111100,
    0b01100110,
    0b01000011,
    0b00000011,
    0b00000011,
    0b00000011,
    0b00000011,
    0b01000011,
    0b01100110,
    0b00111100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  68 $44 'D'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00011111,
    0b00110110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b00110110,
    0b00011111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  69 $45 'E'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01111111,
    0b01100110,
    0b01000110,
    0b00010110,
    0b00011110,
    0b00010110,
    0b00000110,
    0b01000110,
    0b01100110,
    0b01111111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  70 $46 'F'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01111111,
    0b01100110,
    0b01000110,
    0b00010110,
    0b00011110,
    0b00010110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00001111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  71 $47 'G'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111100,
    0b01100110,
    0b01000011,
    0b00000011,
    0b00000011,
    0b01111011,
    0b01100011,
    0b01100011,
    0b01100110,
    0b01011100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  72 $48 'H'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01111111,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  73 $49 'I'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111100,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00111100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  74 $4a 'J'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01111000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110011,
    0b00110011,
    0b00110011,
    0b00011110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  75 $4b 'K'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01100111,
    0b01100110,
    0b01100110,
    0b00110110,
    0b00011110,
    0b00011110,
    0b00110110,
    0b01100110,
    0b01100110,
    0b01100111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  76 $4c 'L'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00001111,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b01000110,
    0b01100110,
    0b01111111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  77 $4d 'M'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01100011,
    0b01110111,
    0b01111111,
    0b01111111,
    0b01101011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  78 $4e 'N'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01100011,
    0b01100111,
    0b01101111,
    0b01111111,
    0b01111011,
    0b01110011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  79 $4f 'O'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111110,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  80 $50 'P'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111111,
    0b01100110,
    0b01100110,
    0b01100110,
    0b00111110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00001111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  81 $51 'Q'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111110,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01101011,
    0b01111011,
    0b00111110,
    0b00110000,
    0b01110000,
    0b00000000,
    0b00000000,
//  82 $52 'R'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111111,
    0b01100110,
    0b01100110,
    0b01100110,
    0b00111110,
    0b00110110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  83 $53 'S'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111110,
    0b01100011,
    0b01100011,
    0b00000110,
    0b00011100,
    0b00110000,
    0b01100000,
    0b01100011,
    0b01100011,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  84 $54 'T'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01111110,
    0b01111110,
    0b01011010,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00111100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  85 $55 'U'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  86 $56 'V'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b00110110,
    0b00011100,
    0b00001000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  87 $57 'W'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01101011,
    0b01101011,
    0b01101011,
    0b01111111,
    0b01110111,
    0b00110110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  88 $58 '1'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01100011,
    0b01100011,
    0b00110110,
    0b00111110,
    0b00011100,
    0b00011100,
    0b00111110,
    0b00110110,
    0b01100011,
    0b01100011,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  89 $59 'Y'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b00111100,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00111100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  90 $5a 'Z'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01111111,
    0b01100011,
    0b01100001,
    0b00110000,
    0b00011000,
    0b00001100,
    0b00000110,
    0b01000011,
    0b01100011,
    0b01111111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  91 $5b 'bracketleft'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111100,
    0b00001100,
    0b00001100,
    0b00001100,
    0b00001100,
    0b00001100,
    0b00001100,
    0b00001100,
    0b00001100,
    0b00111100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  92 $5c 'backslash'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000001,
    0b00000011,
    0b00000111,
    0b00001110,
    0b00011100,
    0b00111000,
    0b01110000,
    0b01100000,
    0b01000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  93 $5d 'bracketright'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111100,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00111100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  94 $5e 'asciicircum'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00001000,
    0b00011100,
    0b00110110,
    0b01100011,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  95 $5f 'underscore'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b11111111,
    0b00000000,
    0b00000000,
//  96 $60 'grave'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00001100,
    0b00001100,
    0b00011000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  97 $61 'a'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00011110,
    0b00110000,
    0b00111110,
    0b00110011,
    0b00110011,
    0b00110011,
    0b01101110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  98 $62 'b'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000111,
    0b00000110,
    0b00000110,
    0b00011110,
    0b00110110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
//  99 $63 'c'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111110,
    0b01100011,
    0b00000011,
    0b00000011,
    0b00000011,
    0b01100011,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 100 $64 'd'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00111000,
    0b00110000,
    0b00110000,
    0b00111100,
    0b00110110,
    0b00110011,
    0b00110011,
    0b00110011,
    0b00110011,
    0b01101110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 101 $65 'e'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111110,
    0b01100011,
    0b01111111,
    0b00000011,
    0b00000011,
    0b01100011,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 102 $66 'f'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00011100,
    0b00110110,
    0b00100110,
    0b00000110,
    0b00001111,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00001111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 103 $67 'g'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01101110,
    0b00110011,
    0b00110011,
    0b00110011,
    0b00110011,
    0b00110011,
    0b00111110,
    0b00110000,
    0b00110011,
    0b00011110,
    0b00000000,
// 104 $68 'h'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000111,
    0b00000110,
    0b00000110,
    0b00110110,
    0b01101110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 105 $69 'i'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00011000,
    0b00011000,
    0b00000000,
    0b00011100,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00111100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 106 $6a 'j'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01100000,
    0b01100000,
    0b00000000,
    0b01110000,
    0b01100000,
    0b01100000,
    0b01100000,
    0b01100000,
    0b01100000,
    0b01100000,
    0b01100110,
    0b01100110,
    0b00111100,
    0b00000000,
// 107 $6b 'k'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000111,
    0b00000110,
    0b00000110,
    0b01100110,
    0b00110110,
    0b00011110,
    0b00011110,
    0b00110110,
    0b01100110,
    0b01100111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 108 $6c 'l'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00011100,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00111100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 109 $6d 'm'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00110111,
    0b01111111,
    0b01101011,
    0b01101011,
    0b01101011,
    0b01101011,
    0b01100011,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 110 $6e 'n'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111011,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 111 $6f 'o'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111110,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 112 $70 'p'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111011,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b00111110,
    0b00000110,
    0b00000110,
    0b00001111,
    0b00000000,
// 113 $71 'q'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01101110,
    0b00110011,
    0b00110011,
    0b00110011,
    0b00110011,
    0b00110011,
    0b00111110,
    0b00110000,
    0b00110000,
    0b01111000,
    0b00000000,
// 114 $72 'r'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111011,
    0b01101110,
    0b01100110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00001111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 115 $73 's'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111110,
    0b01100011,
    0b00000110,
    0b00011100,
    0b00110000,
    0b01100011,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 116 $74 't'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00001100,
    0b00001100,
    0b00111111,
    0b00001100,
    0b00001100,
    0b00001100,
    0b00001100,
    0b01101100,
    0b00111000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 117 $75 'u'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00110011,
    0b00110011,
    0b00110011,
    0b00110011,
    0b00110011,
    0b00110011,
    0b01101110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 118 $76 'v'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b01100110,
    0b00111100,
    0b00011000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 119 $77 'w'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01100011,
    0b01100011,
    0b01101011,
    0b01101011,
    0b01101011,
    0b01111111,
    0b00110110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 120 $78 'x'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01100011,
    0b00110110,
    0b00011100,
    0b00011100,
    0b00011100,
    0b00110110,
    0b01100011,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 121 $79 'y'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01111110,
    0b01100000,
    0b00110000,
    0b00011111,
    0b00000000,
// 122 $7a 'z'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01111111,
    0b00110011,
    0b00011000,
    0b00001100,
    0b00000110,
    0b01100011,
    0b01111111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 123 $7b 'braceleft'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01110000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00001110,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b01110000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 124 $7c 'bar'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00000000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 125 $7d 'braceright'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00001110,
    0b00011000,
    0b00011000,
    0b00011000,
    0b01110000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000,
    0b00001110,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 126 $7e 'asciitilde'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b01101110,
    0b00111011,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
// 127 $7f 'char127'
//  width 8, bbx 0, bby -4, bbw 8, bbh 16
    8,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00011100,
    0b00110110,
    0b01100011,
    0b01100011,
    0b01100011,
    0b01111111,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
};
