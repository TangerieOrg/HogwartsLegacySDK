#include "UObject.hpp"
#include "UWindEnvelopeController.hpp"
UWindEnvelopeController* UWindEnvelopeController::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindEnvelopeController");
    return (UWindEnvelopeController*)res;
}
