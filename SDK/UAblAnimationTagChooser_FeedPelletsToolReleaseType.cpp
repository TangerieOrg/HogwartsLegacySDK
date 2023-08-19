#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_FeedPelletsToolReleaseType.hpp"
UAblAnimationTagChooser_FeedPelletsToolReleaseType* UAblAnimationTagChooser_FeedPelletsToolReleaseType::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_FeedPelletsToolReleaseType");
    return (UAblAnimationTagChooser_FeedPelletsToolReleaseType*)res;
}
