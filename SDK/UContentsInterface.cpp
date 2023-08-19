#include "UContentsInterface.hpp"
#include "UInterface.hpp"
UContentsInterface* UContentsInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ContentsInterface");
    return (UContentsInterface*)res;
}
