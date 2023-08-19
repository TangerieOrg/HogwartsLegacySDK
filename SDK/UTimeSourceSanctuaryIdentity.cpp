#include "UTimeSourceLocal.hpp"
#include "UTimeSourceSanctuaryIdentity.hpp"
UTimeSourceSanctuaryIdentity* UTimeSourceSanctuaryIdentity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TimeSourceSanctuaryIdentity");
    return (UTimeSourceSanctuaryIdentity*)res;
}
