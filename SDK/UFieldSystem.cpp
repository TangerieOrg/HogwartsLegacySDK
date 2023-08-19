#include "UFieldSystem.hpp"
#include "UObject.hpp"
UFieldSystem* UFieldSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.FieldSystem");
    return (UFieldSystem*)res;
}
