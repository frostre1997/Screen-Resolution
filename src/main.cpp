#include <Geode/Geode.hpp>
#include <Geode/modify/CCEGLView.hpp>

using namespace geode::prelude;

// Hooking the CCEGLView class from Cocos2d-x
class $modify(CCEGLView) {

    // Overriding the function that initializes the design resolution size
    void setDesignResolutionSize(float width, float height, ResolutionPolicy resolutionPolicy) {
        
        // 1. Retrieve the user's choice from the mod settings
        auto mode = Mod::get()->getSettingValue<int64_t>("resolution-mode");
        
        // 2. Default to the original dimensions requested by the game
        float targetWidth = width;
        float targetHeight = height;
        ResolutionPolicy targetPolicy = resolutionPolicy;

        // 3. Apply the custom scaling policy based on the setting selection
        switch(mode) {
            case 0:
                // ShowAll: Maintains aspect ratio (16:9) and adds letterboxing/black bars if the screen is longer
                targetPolicy = ResolutionPolicy::kResolutionShowAll;
                break;
            case 1:
                // ExactFit: Stretches the game window to fill the entire display (deforms layout)
                targetPolicy = ResolutionPolicy::kResolutionExactFit;
                break;
            case 2:
                // NoBorder: Fills the screen perfectly without stretching, but clips the top and bottom edges
                targetPolicy = ResolutionPolicy::kResolutionNoBorder;
                break;
            default:
                break;
        }

        // 4. Call the original function with our updated configuration
        CCEGLView::setDesignResolutionSize(targetWidth, targetHeight, targetPolicy);
    }
};

