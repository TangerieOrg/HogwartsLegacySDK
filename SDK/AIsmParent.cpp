#include "AActor.hpp"
#include "AIsmParent.hpp"
#include "UStaticMesh.hpp"
AIsmParent* AIsmParent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.IsmParent");
    return (AIsmParent*)res;
}
