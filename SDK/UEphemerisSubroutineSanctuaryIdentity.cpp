#include "UEphemerisSubroutine.hpp"
#include "UEphemerisSubroutineSanctuaryIdentity.hpp"
UEphemerisSubroutineSanctuaryIdentity* UEphemerisSubroutineSanctuaryIdentity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EphemerisSubroutineSanctuaryIdentity");
    return (UEphemerisSubroutineSanctuaryIdentity*)res;
}
