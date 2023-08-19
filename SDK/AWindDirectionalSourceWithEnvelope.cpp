#include "AInfo.hpp"
#include "AWindDirectionalSourceWithEnvelope.hpp"
#include "UWindDirectionalSourceWithEnvelopeComponent.hpp"
AWindDirectionalSourceWithEnvelope* AWindDirectionalSourceWithEnvelope::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindDirectionalSourceWithEnvelope");
    return (AWindDirectionalSourceWithEnvelope*)res;
}
