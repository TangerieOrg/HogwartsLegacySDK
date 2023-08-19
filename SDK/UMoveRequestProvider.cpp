#include "UInterface.hpp"
#include "UMoveRequestProvider.hpp"
UMoveRequestProvider* UMoveRequestProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.MoveRequestProvider");
    return (UMoveRequestProvider*)res;
}
