#include "ALandscape.hpp"
#include "ALandscapeProxy.hpp"
ALandscape* ALandscape::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.Landscape");
    return (ALandscape*)res;
}
