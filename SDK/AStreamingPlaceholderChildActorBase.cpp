#include "AStreamingPlaceholderBase.hpp"
#include "AStreamingPlaceholderChildActorBase.hpp"
#include "EStreamingPlaceholderPriority.hpp"
#include "UStreamingPreviewChildActorComponent.hpp"
AStreamingPlaceholderChildActorBase* AStreamingPlaceholderChildActorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StreamingPlaceholderChildActorBase");
    return (AStreamingPlaceholderChildActorBase*)res;
}
