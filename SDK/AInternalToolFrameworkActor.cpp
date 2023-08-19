#include "AActor.hpp"
#include "AInternalToolFrameworkActor.hpp"
AInternalToolFrameworkActor* AInternalToolFrameworkActor::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.InternalToolFrameworkActor");
    return (AInternalToolFrameworkActor*)res;
}
