// ShapeText.h - Библиотека для рисования текста с помощью фигур на TFT_eSPI

#ifndef SHAPE_TEXT_H
#define SHAPE_TEXT_H

#include <TFT_eSPI.h>

// Типы шрифтов
enum ShapeFontType {
  NORMAL,
  BOLD,
  ITALIC,
  NARROW,
  WIDE
};

void drawShapeChar(TFT_eSPI &tft, char c, int32_t x, int32_t y, uint32_t color, int size = 1, ShapeFontType fontType = NORMAL) {
  int s = size;
  int thickness = (fontType == BOLD) ? 2 : 1;
  int slant = (fontType == ITALIC) ? s * 2 : 0;
  float widthScale = (fontType == NARROW) ? 0.8 : (fontType == WIDE) ? 1.2 : 1.0;
  int x_offset = slant;
  int w = s * 16 * widthScale; // Ширина символа
  int h = s * 16; // Высота символа

  // Английский алфавит (A-Z)
  if (c == 'A') {
    tft.drawLine(x + x_offset, y + h, x + w / 2 + x_offset, y, color);
    tft.drawLine(x + w / 2 + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + w / 4 + x_offset, y + h / 2, x + 3 * w / 4 + x_offset, y + h / 2, color);
  } else if (c == 'B') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w / 2 + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w / 2 + x_offset, y + h / 2, color);
    tft.drawLine(x + x_offset, y + h, x + w / 2 + x_offset, y + h, color);
    tft.drawLine(x + w / 2 + x_offset, y, x + w / 2 + x_offset, y + h / 2, color);
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w / 2 + x_offset, y + h, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + h / 4, w / 4, h / 4, color);
  } else if (c == 'C') {
    tft.drawArc(x + w / 2 + x_offset, y + h / 2, w / 2, 0, 45, 315, color, TFT_TRANSPARENT, true);
  } else if (c == 'D') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w / 2 + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h, x + w / 2 + x_offset, y + h, color);
    tft.drawLine(x + w / 2 + x_offset, y, x + w / 2 + x_offset, y + h, color);
  } else if (c == 'E') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
  } else if (c == 'F') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w / 2 + x_offset, y + h / 2, color);
  } else if (c == 'G') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h, color);
  } else if (c == 'H') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
  } else if (c == 'I') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
  } else if (c == 'J') {
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + 3 * h / 4, color);
    tft.drawArc(x + w / 2 + x_offset, y + 3 * h / 4, w / 2, 0, 180, 360, color, TFT_TRANSPARENT, true);
  } else if (c == 'K') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h, color);
  } else if (c == 'L') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
  } else if (c == 'M') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w / 2 + x_offset, y + h / 2, color);
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w + x_offset, y, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
  } else if (c == 'N') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
  } else if (c == 'O') {
    tft.drawEllipse(x + w / 2 + x_offset, y + h / 2, w / 2, h / 2 + s * 2, color);
  } else if (c == 'P') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h / 2, color);
  } else if (c == 'Q') {
    tft.drawEllipse(x + w / 2 + x_offset, y + h / 2, w / 2, h / 2, color);
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w + x_offset, y + h, color);
  } else if (c == 'R') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h, color);
  } else if (c == 'S') {
    tft.drawArc(x + w / 2 + x_offset, y + h / 2, w / 2, 0, 45, 315, color, TFT_TRANSPARENT, true);
  } else if (c == 'T') {
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + w / 2 + x_offset, y, x + w / 2 + x_offset, y + h, color);
  } else if (c == 'U') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + 3 * h / 4, color);
    tft.drawArc(x + w / 2 + x_offset, y + 3 * h / 4, w / 2, 0, 180, 360, color, TFT_TRANSPARENT, true);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + 3 * h / 4, color);
  } else if (c == 'V') {
    tft.drawLine(x + x_offset, y, x + w / 2 + x_offset, y + h, color);
    tft.drawLine(x + w / 2 + x_offset, y + h, x + w + x_offset, y, color);
  } else if (c == 'W') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w / 3 + x_offset, y, color);
    tft.drawLine(x + w / 3 + x_offset, y, x + 2 * w / 3 + x_offset, y + h, color);
    tft.drawLine(x + 2 * w / 3 + x_offset, y + h, x + w + x_offset, y, color);
  } else if (c == 'X') {
    tft.drawLine(x + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y, x + x_offset, y + h, color);
  } else if (c == 'Y') {
    tft.drawLine(x + x_offset, y, x + w / 2 + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y, x + w / 2 + x_offset, y + h / 2, color);
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w / 2 + x_offset, y + h, color);
  } else if (c == 'Z') {
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + w + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
  }
  // Английский алфавит (a-z)
  else if (c == 'a') {
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
    tft.drawLine(x + 3 * w / 4 + x_offset, y + h / 2, x + 3 * w / 4 + x_offset, y + h, color);
  } else if (c == 'b') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == 'c') {
    tft.drawArc(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, 0, 45, 315, color, TFT_TRANSPARENT, true);
  } else if (c == 'd') {
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == 'e') {
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
    tft.drawLine(x + w / 4 + x_offset, y + 3 * h / 4, x + 3 * w / 4 + x_offset, y + 3 * h / 4, color);
  } else if (c == 'f') {
    tft.drawLine(x + w / 2 + x_offset, y, x + w / 2 + x_offset, y + h, color);
    tft.drawLine(x + w / 4 + x_offset, y, x + 3 * w / 4 + x_offset, y, color);
    tft.drawLine(x + w / 4 + x_offset, y + h / 2, x + w / 2 + x_offset, y + h / 2, color);
  } else if (c == 'g') {
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
    tft.drawLine(x + w + x_offset, y + 3 * h / 4, x + w + x_offset, y + h + s * 2, color);
  } else if (c == 'h') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h, color);
  } else if (c == 'i') {
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w / 2 + x_offset, y + h, color);
    tft.fillCircle(x + w / 2 + x_offset, y + h / 2 - s * 2, s * 1, color);
  } else if (c == 'j') {
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w / 2 + x_offset, y + h + s * 2, color);
    tft.fillCircle(x + w / 2 + x_offset, y + h / 2 - s * 2, s * 1, color);
  } else if (c == 'k') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + 3 * h / 4, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h, color);
  } else if (c == 'l') {
    tft.drawLine(x + w / 2 + x_offset, y, x + w / 2 + x_offset, y + h, color);
  } else if (c == 'm') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w / 3 + x_offset, y + 3 * h / 4, color);
    tft.drawLine(x + w / 3 + x_offset, y + 3 * h / 4, x + 2 * w / 3 + x_offset, y + h / 2, color);
    tft.drawLine(x + 2 * w / 3 + x_offset, y + h / 2, x + w + x_offset, y + h, color);
  } else if (c == 'n') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h, color);
  } else if (c == 'o') {
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == 'p') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h + s * 2, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == 'q') {
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h + s * 2, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == 'r') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == 's') {
    tft.drawArc(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, 0, 45, 315, color, TFT_TRANSPARENT, true);
  } else if (c == 't') {
    tft.drawLine(x + w / 2 + x_offset, y, x + w / 2 + x_offset, y + h, color);
    tft.drawLine(x + w / 4 + x_offset, y + h / 4, x + 3 * w / 4 + x_offset, y + h / 4, color);
  } else if (c == 'u') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + 3 * h / 4, color);
    tft.drawArc(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, 0, 180, 360, color, TFT_TRANSPARENT, true);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + 3 * h / 4, color);
  } else if (c == 'v') {
    tft.drawLine(x + x_offset, y + h / 2, x + w / 2 + x_offset, y + h, color);
    tft.drawLine(x + w / 2 + x_offset, y + h, x + w + x_offset, y + h / 2, color);
  } else if (c == 'w') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w / 3 + x_offset, y + h / 2, color);
    tft.drawLine(x + w / 3 + x_offset, y + h / 2, x + 2 * w / 3 + x_offset, y + h, color);
    tft.drawLine(x + 2 * w / 3 + x_offset, y + h, x + w + x_offset, y + h / 2, color);
  } else if (c == 'x') {
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + x_offset, y + h, color);
  } else if (c == 'y') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + 3 * h / 4, color);
    tft.drawArc(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, 0, 180, 360, color, TFT_TRANSPARENT, true);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h + s * 2, color);
  } else if (c == 'z') {
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
  }
  // Русский алфавит (А-Я, включая Ё)
  else if (c == 'А') {
    tft.drawLine(x + x_offset, y + h, x + w / 2 + x_offset, y, color);
    tft.drawLine(x + w / 2 + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + w / 4 + x_offset, y + h / 2, x + 3 * w / 4 + x_offset, y + h / 2, color);
  } else if (c == 'Б') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 2, h / 4, color);
  } else if (c == 'В') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h / 2, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 2, h / 4, color);
  } else if (c == 'Г') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
  } else if (c == 'Д') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w / 2 + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y, x + w / 2 + x_offset, y + h / 2, color);
  } else if (c == 'Е') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
  } else if (c == 'Ё') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
    tft.fillCircle(x + w / 3 + x_offset, y - s * 2, s * 1, color);
    tft.fillCircle(x + 2 * w / 3 + x_offset, y - s * 2, s * 1, color);
  } else if (c == 'Ж') {
    tft.drawLine(x + w / 2 + x_offset, y, x + w / 2 + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w / 2 + x_offset, y + h / 2, color);
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w + x_offset, y, color);
  } else if (c == 'З') {
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + w + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
  } else if (c == 'И') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y, color);
  } else if (c == 'Й') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y, color);
    tft.fillCircle(x + w + x_offset, y - s * 2, s * 1, color);
  } else if (c == 'К') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h, color);
  } else if (c == 'Л') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h, x + w / 2 + x_offset, y, color);
  } else if (c == 'М') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w / 2 + x_offset, y + h / 2, color);
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w + x_offset, y, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
  } else if (c == 'Н') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
  } else if (c == 'О') {
    tft.drawEllipse(x + w / 2 + x_offset, y + h / 2, w / 2, h / 2 + s * 2, color);
  } else if (c == 'П') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
  } else if (c == 'Р') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h / 2, color);
  } else if (c == 'С') {
    tft.drawArc(x + w / 2 + x_offset, y + h / 2, w / 2, 0, 45, 315, color, TFT_TRANSPARENT, true);
  } else if (c == 'Т') {
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + w / 2 + x_offset, y, x + w / 2 + x_offset, y + h, color);
  } else if (c == 'У') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h / 2, color);
    tft.drawArc(x + w / 2 + x_offset, y + 3 * h / 4, w / 2, 0, 180, 360, color, TFT_TRANSPARENT, true);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + 3 * h / 4, color);
  } else if (c == 'Ф') {
    tft.drawLine(x + w / 2 + x_offset, y, x + w / 2 + x_offset, y + h, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + h / 2, w / 2, h / 4, color);
  } else if (c == 'Х') {
    tft.drawLine(x + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y, x + x_offset, y + h, color);
  } else if (c == 'Ц') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h, x + w + x_offset, y + h + s * 2, color);
  } else if (c == 'Ч') {
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y, x + x_offset, y + h / 2, color);
  } else if (c == 'Ш') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + w / 2 + x_offset, y, x + w / 2 + x_offset, y + h, color);
  } else if (c == 'Щ') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + w / 2 + x_offset, y, x + w / 2 + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h, x + w + x_offset, y + h + s * 2, color);
  } else if (c == 'Ъ') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w / 2 + x_offset, y, color);
    tft.drawEllipse(x + 3 * w / 4 + x_offset, y + h / 2, w / 4, h / 2, color);
  } else if (c == 'Ы') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w / 2 + x_offset, y, color);
    tft.drawLine(x + w / 2 + x_offset, y, x + w / 2 + x_offset, y + h, color);
    tft.drawEllipse(x + 3 * w / 4 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == 'Ь') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 2, h / 4, color);
  } else if (c == 'Э') {
    tft.drawArc(x + w / 2 + x_offset, y + h / 2, w / 2, 0, 225, 135, color, TFT_TRANSPARENT, true);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
  } else if (c == 'Ю') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w / 2 + x_offset, y + h / 2, color);
    tft.drawEllipse(x + 3 * w / 4 + x_offset, y + h / 2, w / 4, h / 2, color);
  } else if (c == 'Я') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + x_offset, y + h, color);
  }
  // Русский алфавит (а-я, включая ё)
  else if (c == 'а') {
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
    tft.drawLine(x + 3 * w / 4 + x_offset, y + h / 2, x + 3 * w / 4 + x_offset, y + h, color);
  } else if (c == 'б') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == 'в') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 2, h / 4, color);
  } else if (c == 'г') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
  } else if (c == 'д') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w / 2 + x_offset, y + 3 * h / 4, color);
  } else if (c == 'е') {
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
    tft.drawLine(x + w / 4 + x_offset, y + 3 * h / 4, x + 3 * w / 4 + x_offset, y + 3 * h / 4, color);
  } else if (c == 'ё') {
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
    tft.drawLine(x + w / 4 + x_offset, y + 3 * h / 4, x + 3 * w / 4 + x_offset, y + 3 * h / 4, color);
    tft.fillCircle(x + w / 3 + x_offset, y + h / 2 - s * 2, s * 1, color);
    tft.fillCircle(x + 2 * w / 3 + x_offset, y + h / 2 - s * 2, s * 1, color);
  } else if (c == 'ж') {
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w / 2 + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w / 2 + x_offset, y + 3 * h / 4, color);
    tft.drawLine(x + w / 2 + x_offset, y + 3 * h / 4, x + w + x_offset, y + h / 2, color);
  } else if (c == 'з') {
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
  } else if (c == 'и') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h / 2, color);
  } else if (c == 'й') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h / 2, color);
    tft.fillCircle(x + w + x_offset, y + h / 2 - s * 2, s * 1, color);
  } else if (c == 'к') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + 3 * h / 4, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + x_offset, y + 3 * h / 4, x + w + x_offset, y + h, color);
  } else if (c == 'л') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h, x + w / 2 + x_offset, y + h / 2, color);
  } else if (c == 'м') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w / 2 + x_offset, y + 3 * h / 4, color);
    tft.drawLine(x + w / 2 + x_offset, y + 3 * h / 4, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h, color);
  } else if (c == 'н') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + 3 * h / 4, x + w + x_offset, y + 3 * h / 4, color);
  } else if (c == 'о') {
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == 'п') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h, color);
  } else if (c == 'р') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == 'с') {
    tft.drawArc(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, 0, 45, 315, color, TFT_TRANSPARENT, true);
  } else if (c == 'т') {
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w / 2 + x_offset, y + h, color);
  } else if (c == 'у') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + 3 * h / 4, color);
    tft.drawArc(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, 0, 180, 360, color, TFT_TRANSPARENT, true);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h + s * 2, color);
  } else if (c == 'ф') {
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w / 2 + x_offset, y + h + s * 2, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == 'х') {
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + x_offset, y + h, color);
  } else if (c == 'ц') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h, x + w + x_offset, y + h + s * 2, color);
  } else if (c == 'ч') {
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
  } else if (c == 'ш') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h, color);
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w / 2 + x_offset, y + h, color);
  } else if (c == 'щ') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h, color);
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w / 2 + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y + h, x + w + x_offset, y + h + s * 2, color);
  } else if (c == 'ъ') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w / 2 + x_offset, y + h / 2, color);
    tft.drawEllipse(x + 3 * w / 4 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == 'ы') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w / 2 + x_offset, y + h / 2, color);
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w / 2 + x_offset, y + h, color);
    tft.drawEllipse(x + 3 * w / 4 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == 'ь') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 2, h / 4, color);
  } else if (c == 'э') {
    tft.drawArc(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, 0, 225, 135, color, TFT_TRANSPARENT, true);
    tft.drawLine(x + x_offset, y + 3 * h / 4, x + w + x_offset, y + 3 * h / 4, color);
  } else if (c == 'ю') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + 3 * h / 4, x + w / 2 + x_offset, y + 3 * h / 4, color);
    tft.drawEllipse(x + 3 * w / 4 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == 'я') {
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + x_offset, y + 3 * h / 4, x + w + x_offset, y + h, color);
  }
  // Цифры
  else if (c == '0') {
    tft.drawEllipse(x + w / 2 + x_offset, y + h / 2, w / 2, h / 2 + s * 2, color);
  } else if (c == '1') {
    tft.drawLine(x + w / 2 + x_offset, y, x + w / 2 + x_offset, y + h, color);
  } else if (c == '2') {
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + x_offset, y + h / 2, color);
    tft.drawLine(x + x_offset, y + h / 2, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
  } else if (c == '3') {
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
  } else if (c == '4') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h / 2, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
  } else if (c == '5') {
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + x_offset, y, x + x_offset, y + h / 2, color);
    tft.drawLine(x + x_offset, y + h / 2, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
  } else if (c == '6') {
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 2, h / 4, color);
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
  } else if (c == '7') {
    tft.drawLine(x + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + w + x_offset, y, x + x_offset, y + h, color);
  } else if (c == '8') {
    tft.drawEllipse(x + w / 2 + x_offset, y + h / 4, w / 4, h / 4, color);
    tft.drawEllipse(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, h / 4, color);
  } else if (c == '9') {
    tft.drawEllipse(x + w / 2 + x_offset, y + h / 4, w / 2, h / 4, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
  }
  // Знаки препинания
  else if (c == '.') {
    tft.fillCircle(x + w / 2 + x_offset, y + h, s * 1, color);
  } else if (c == ',') {
    tft.fillCircle(x + w / 2 + x_offset, y + h, s * 1, color);
    tft.drawLine(x + w / 2 + x_offset, y + h, x + w / 2 - s * 2 + x_offset, y + h + s * 2, color);
  } else if (c == '!') {
    tft.drawLine(x + w / 2 + x_offset, y, x + w / 2 + x_offset, y + 3 * h / 4, color);
    tft.fillCircle(x + w / 2 + x_offset, y + h, s * 1, color);
  } else if (c == '?') {
    tft.drawLine(x + w / 2 + x_offset, y, x + w + x_offset, y, color);
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h / 2, color);
    tft.drawLine(x + w + x_offset, y + h / 2, x + w / 2 + x_offset, y + h / 2, color);
    tft.drawLine(x + w / 2 + x_offset, y + h / 2, x + w / 2 + x_offset, y + 3 * h / 4, color);
    tft.fillCircle(x + w / 2 + x_offset, y + h, s * 1, color);
  } else if (c == ':') {
    tft.fillCircle(x + w / 2 + x_offset, y + h / 4, s * 1, color);
    tft.fillCircle(x + w / 2 + x_offset, y + 3 * h / 4, s * 1, color);
  } else if (c == ';') {
    tft.fillCircle(x + w / 2 + x_offset, y + h / 4, s * 1, color);
    tft.fillCircle(x + w / 2 + x_offset, y + 3 * h / 4, s * 1, color);
    tft.drawLine(x + w / 2 + x_offset, y + 3 * h / 4, x + w / 2 - s * 2 + x_offset, y + 3 * h / 4 + s * 2, color);
  } else if (c == '(') {
    tft.drawArc(x + w / 2 + x_offset, y + h / 2, w / 2, 0, 90, 270, color, TFT_TRANSPARENT, true);
  } else if (c == ')') {
    tft.drawArc(x + w / 2 + x_offset, y + h / 2, w / 2, 0, 270, 90, color, TFT_TRANSPARENT, true);
  } else if (c == '[') {
    tft.drawLine(x + x_offset, y, x + x_offset, y + h, color);
    tft.drawLine(x + x_offset, y, x + w / 4 + x_offset, y, color);
    tft.drawLine(x + x_offset, y + h, x + w / 4 + x_offset, y + h, color);
  } else if (c == ']') {
    tft.drawLine(x + w + x_offset, y, x + w + x_offset, y + h, color);
    tft.drawLine(x + w + x_offset, y, x + 3 * w / 4 + x_offset, y, color);
    tft.drawLine(x + w + x_offset, y + h, x + 3 * w / 4 + x_offset, y + h, color);
  } else if (c == '{') {
    tft.drawArc(x + w / 2 + x_offset, y + h / 4, w / 4, 0, 90, 270, color, TFT_TRANSPARENT, true);
    tft.drawArc(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, 0, 90, 270, color, TFT_TRANSPARENT, true);
  } else if (c == '}') {
    tft.drawArc(x + w / 2 + x_offset, y + h / 4, w / 4, 0, 270, 90, color, TFT_TRANSPARENT, true);
    tft.drawArc(x + w / 2 + x_offset, y + 3 * h / 4, w / 4, 0, 270, 90, color, TFT_TRANSPARENT, true);
  } else if (c == '-') {
    tft.drawLine(x + w / 4 + x_offset, y + h / 2, x + 3 * w / 4 + x_offset, y + h / 2, color);
  } else if (c == '_') {
    tft.drawLine(x + x_offset, y + h, x + w + x_offset, y + h, color);
  } else if (c == '=') {
    tft.drawLine(x + w / 4 + x_offset, y + h / 3, x + 3 * w / 4 + x_offset, y + h / 3, color);
    tft.drawLine(x + w / 4 + x_offset, y + 2 * h / 3, x + 3 * w / 4 + x_offset, y + 2 * h / 3, color);
  } else if (c == '+') {
    tft.drawLine(x + w / 2 + x_offset, y + h / 4, x + w / 2 + x_offset, y + 3 * h / 4, color);
    tft.drawLine(x + w / 4 + x_offset, y + h / 2, x + 3 * w / 4 + x_offset, y + h / 2, color);
  }
}

void drawShapeString(TFT_eSPI &tft, const char* string, int32_t x, int32_t y, uint32_t color, int size = 1, ShapeFontType fontType = NORMAL) {
  int offset = 0;
  float widthScale = (fontType == NARROW) ? 0.8 : (fontType == WIDE) ? 1.2 : 1.0;
  for (int i = 0; string[i] != '\0'; i++) {
    drawShapeChar(tft, string[i], x + offset, y, color, size, fontType);
    offset += 16 * size * widthScale + 2 * size; // Ширина символа + пробел
  }
}

#endif