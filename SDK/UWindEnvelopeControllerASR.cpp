#include "UWindEnvelopeController.hpp"
#include "UWindEnvelopeControllerASR.hpp"
UWindEnvelopeControllerASR* UWindEnvelopeControllerASR::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindEnvelopeControllerASR");
    return (UWindEnvelopeControllerASR*)res;
}
