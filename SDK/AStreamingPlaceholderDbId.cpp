#include "AStreamingPlaceholderChildActorBase.hpp"
#include "AStreamingPlaceholderDbId.hpp"
#include "FSpawnSelectInfo.hpp"
AStreamingPlaceholderDbId* AStreamingPlaceholderDbId::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StreamingPlaceholderDbId");
    return (AStreamingPlaceholderDbId*)res;
}
