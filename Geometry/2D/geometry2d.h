#pragma once
#include "../dimensions.h"
#include "klein/klein.hpp"
#include <variant>
#include <vector>

namespace Geom2D {

struct DistanceRange {
    float lo;
    float hi;
};

struct AngleRange {
    Radians lo;
    Radians hi;
};

struct CenterCircle {
    kln::point center;
    Millimeter radius;
};

struct LineSegment {
    kln::point start;
    kln::point end;
};

struct CenterArc {
    kln::point center;
};

using PathElement = std::variant<LineSegment, CenterArc>;

using Path = std::vector<PathElement>;

enum GeometryType {
    Real,
    Construction,
};

using ClosedPath = std::variant<CenterCircle, Path>;

} // namespace Geom2D
