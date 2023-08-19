#include "AActor.hpp"
#include "ATotem.hpp"
ATotem* ATotem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Totem");
    return (ATotem*)res;
}
