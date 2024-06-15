#include "controls.h"

static const std::vector<std::pair<std::string, std::string>> controls{{"H", "Toggle on-screen help text for controls"},
                                                                       {"Space", "Toggle play/pause"},
                                                                       {",", "Toggle bidirectional in-buffer loop/pause"},
                                                                       {".", "Toggle forward-only in-buffer loop/pause"},
                                                                       {"Escape", "Quit"},
                                                                       {"Down arrow", "Seek 15 seconds backward"},
                                                                       {"Left arrow", "Seek 1 second backward"},
                                                                       {"Page down", "Seek 600 seconds backward"},
                                                                       {"Up arrow", "Seek 15 seconds forward"},
                                                                       {"Right arrow", "Seek 1 second forward"},
                                                                       {"Page up", "Seek 600 seconds forward"},
                                                                       {"J", "Reduce playback speed"},
                                                                       {"L", "Increase playback speed"},
                                                                       {"S", "Swap left and right video"},
                                                                       {"A", "Move to the previous frame in the buffer"},
                                                                       {"D", "Move to the next frame in the buffer"},
                                                                       {"F", "Save both frames as PNG images in the current directory"},
                                                                       {"P", "Print mouse position and pixel value under cursor to console"},
                                                                       {"M", "Print image similarity metrics to console"},
                                                                       {"Z", "Magnify area around cursor (result shown in lower left corner)"},
                                                                       {"C", "Magnify area around cursor (result shown in lower right corner)"},
                                                                       {"R", "Re-center and reset zoom to 100% (x1)"},
                                                                       {"1", "Toggle hide/show left video"},
                                                                       {"2", "Toggle hide/show right video"},
                                                                       {"3", "Toggle hide/show HUD"},
                                                                       {"5", "Zoom  50% (x0.5)"},
                                                                       {"6", "Zoom 100% (x1)"},
                                                                       {"7", "Zoom 200% (x2)"},
                                                                       {"8", "Zoom 400% (x4)"},
                                                                       {"0", "Toggle video/subtraction mode"},
                                                                       {"+", "Time-shift right video 1 frame forward"},
                                                                       {"-", "Time-shift right video 1 frame backward"}};

static const std::vector<std::string> instructions{"Move the mouse horizontally to adjust the movable slider position.",
                                                   "Use the mouse wheel to zoom in/out on the pixel under the cursor. Pan the view by moving the mouse while holding down the right button.",
                                                   "Left-click the mouse to perform a time seek based on the horizontal position of the mouse cursor relative to the window width (the target position is shown in the lower right corner).",
                                                   "Hold the SHIFT key while pressing D to decode and move to the next frame.",
                                                   "Hold CTRL while time-shifting with +/- for faster increments/decrements of 10 frames per keystroke. Similarly, hold down the ALT key for even bigger time-shifts of 100 frames."};

const std::vector<std::pair<std::string, std::string>> get_controls() {
  return controls;
}

const std::vector<std::string> get_instructions() {
  return instructions;
}
