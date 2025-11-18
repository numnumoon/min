#pragma once

#include "export.h"
#include <memory>
#include <vector>

class Shape;

PROCEDURAL_API void drawAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes);
