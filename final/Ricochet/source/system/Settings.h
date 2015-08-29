#ifndef SETTINGS_H
#define SETTINGS_H

#include "general.h"

class Settings
{
    public:
        Settings();
        virtual ~Settings();
    private:
        unsigned             m_fpsLimit     = 0;
        bool                 m_fullscreen   = false;
        gz::Size<unsigned>   m_resolution	= gz::Size<unsigned>(800,600);
        bool                 m_vsync        = false;

    public: // member getters
        bool                getVsync() const;
        bool                getFullscreen() const;
        unsigned            getScreenWidth() const;
        unsigned            getScreenHeight() const;
        unsigned            getFpsLimit() const;

        void                setVsync(bool vsync);
        void                setFullscreen(bool fullscreen);
        void                setScreenWidth(int width);
        void                setScreenHeight(int height);
        void                setFpsLimit(int fps_limit);

    public: // extra functions
        void readSettings();
        void saveSettings();
};

#endif // SETTINGS_H
