#include "FFollicleMaskOptions.hpp"
#include "UGroomCreateFollicleMaskOptions.hpp"
#include "UObject.hpp"
UGroomCreateFollicleMaskOptions* UGroomCreateFollicleMaskOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomCreateFollicleMaskOptions");
    return (UGroomCreateFollicleMaskOptions*)res;
}
