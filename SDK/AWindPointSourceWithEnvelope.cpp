#include "AInfo.hpp"
#include "AWindPointSourceWithEnvelope.hpp"
#include "UWindPointSourceWithEnvelopeComponent.hpp"
AWindPointSourceWithEnvelope* AWindPointSourceWithEnvelope::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindPointSourceWithEnvelope");
    return (AWindPointSourceWithEnvelope*)res;
}
