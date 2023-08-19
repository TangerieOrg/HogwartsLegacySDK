#include "AStreamingPlaceholderChildActorBase.hpp"
#include "AStreamingPlaceholderFrontend.hpp"
AStreamingPlaceholderFrontend* AStreamingPlaceholderFrontend::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StreamingPlaceholderFrontend");
    return (AStreamingPlaceholderFrontend*)res;
}
