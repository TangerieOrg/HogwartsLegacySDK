#include "FVector2D.hpp"
#include "UVector2DProvider.hpp"
#include "UVector2D_Direct.hpp"
UVector2D_Direct* UVector2D_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Vector2D_Direct");
    return (UVector2D_Direct*)res;
}
