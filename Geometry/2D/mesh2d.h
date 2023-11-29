#pragma once

#include "klein/point.hpp"
#include <optional>
#include <vector>

struct ClosedPath {
    std::vector<kln::point> pts;
};

struct Path {
    std::vector<kln::point> pts;
    std::optional<ClosedPath> toClosed();
};
