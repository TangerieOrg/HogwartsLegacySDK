#include "AActor.hpp"
#include "ABlinkGate.hpp"
ABlinkGate* ABlinkGate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BlinkGate");
    return (ABlinkGate*)res;
}
