#include "AStreamingPlaceholderActor.hpp"
#include "AStreamingPlaceholderChildActorBase.hpp"
AStreamingPlaceholderActor* AStreamingPlaceholderActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StreamingPlaceholderActor");
    return (AStreamingPlaceholderActor*)res;
}
