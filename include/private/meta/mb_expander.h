/*
 * Copyright (C) 2021 Linux Studio Plugins Project <https://lsp-plug.in/>
 *           (C) 2021 Vladimir Sadovnikov <sadko4u@gmail.com>
 *
 * This file is part of lsp-plugins-mb-expander
 * Created on: 3 авг. 2021 г.
 *
 * lsp-plugins-mb-expander is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * lsp-plugins-mb-expander is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with lsp-plugins-mb-expander. If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef PRIVATE_META_MB_EXPANDER_H_
#define PRIVATE_META_MB_EXPANDER_H_

#include <lsp-plug.in/plug-fw/meta/types.h>
#include <lsp-plug.in/plug-fw/const.h>
#include <lsp-plug.in/dsp-units/misc/windows.h>


namespace lsp
{
    namespace meta
    {
        struct mb_expander_metadata
        {
            static const size_t         BANDS_MAX           = 8;
            static const size_t         BANDS_DFL           = 4;

            static const float          IN_GAIN_DFL         = GAIN_AMP_0_DB;
            static const float          OUT_GAIN_DFL        = GAIN_AMP_0_DB;

            static const size_t         SC_BAND_DFL         = 0;
            static const size_t         SC_MODE_DFL         = 1;
            static const size_t         SC_SOURCE_DFL       = 0;
            static const size_t         SC_TYPE_DFL         = 0;

            static const float          FREQ_MIN            = 10.0f;
            static const float          FREQ_MAX            = 20000.0f;
            static const float          FREQ_DFL            = 1000.0f;
            static const float          FREQ_STEP           = 0.002f;

            static const float          OUT_FREQ_MIN        = 0.0f;
            static const float          OUT_FREQ_MAX        = MAX_SAMPLE_RATE;
            static const float          OUT_FREQ_DFL        = 1000.0f;
            static const float          OUT_FREQ_STEP       = 0.002f;

            static const float          REACTIVITY_MIN      = 0.000;    // Minimum reactivity [ms]
            static const float          REACTIVITY_MAX      = 250;      // Maximum reactivity [ms]
            static const float          REACTIVITY_DFL      = 10;       // Default reactivity [ms]
            static const float          REACTIVITY_STEP     = 0.025;    // Reactivity step

            static const float          ATTACK_LVL_MIN      = GAIN_AMP_M_60_DB;
            static const float          ATTACK_LVL_MAX      = GAIN_AMP_0_DB;
            static const float          ATTACK_LVL_DFL      = GAIN_AMP_M_12_DB;
            static const float          ATTACK_LVL_STEP     = 0.05f;

            static const float          RELEASE_LVL_MIN     = GAIN_AMP_M_INF_DB;
            static const float          RELEASE_LVL_MAX     = GAIN_AMP_P_36_DB;
            static const float          RELEASE_LVL_DFL     = GAIN_AMP_M_INF_DB;
            static const float          RELEASE_LVL_STEP    = 0.05f;

            static const float          ATTACK_TIME_MIN     = 0.0f;
            static const float          ATTACK_TIME_MAX     = 2000.0f;
            static const float          ATTACK_TIME_DFL     = 20.0f;
            static const float          ATTACK_TIME_STEP    = 0.0025f;

            static const float          RELEASE_TIME_MIN    = 0.0f;
            static const float          RELEASE_TIME_MAX    = 5000.0f;
            static const float          RELEASE_TIME_DFL    = 100.0f;
            static const float          RELEASE_TIME_STEP   = 0.0025f;

            static const float          RATIO_MIN           = 1.0f;
            static const float          RATIO_MAX           = 100.0f;
            static const float          RATIO_DFL           = 1.0f;
            static const float          RATIO_STEP          = 0.0025f;

            static const float          KNEE_MIN            = GAIN_AMP_M_24_DB;
            static const float          KNEE_MAX            = GAIN_AMP_0_DB;
            static const float          KNEE_DFL            = GAIN_AMP_M_6_DB;
            static const float          KNEE_STEP           = 0.01f;

            static const float          MAKEUP_MIN          = GAIN_AMP_M_60_DB;
            static const float          MAKEUP_MAX          = GAIN_AMP_P_60_DB;
            static const float          MAKEUP_DFL          = GAIN_AMP_0_DB;
            static const float          MAKEUP_STEP         = 0.05f;

            static const float          LOOKAHEAD_MIN       = 0.0f;
            static const float          LOOKAHEAD_MAX       = 20.0f;
            static const float          LOOKAHEAD_DFL       = 0.0f;
            static const float          LOOKAHEAD_STEP      = 0.01f;

            static const float          ZOOM_MIN            = GAIN_AMP_M_18_DB;
            static const float          ZOOM_MAX            = GAIN_AMP_0_DB;
            static const float          ZOOM_DFL            = GAIN_AMP_0_DB;
            static const float          ZOOM_STEP           = 0.0125f;

            static const size_t         MESH_POINTS         = 640;

            static const size_t         CURVE_MESH_SIZE     = 256;
            static const float          CURVE_DB_MIN        = -72;
            static const float          CURVE_DB_MAX        = +24;

            static const float          FREQ_BOOST_MIN      = 10.0f;
            static const float          FREQ_BOOST_MAX      = 20000.0f;

            static const size_t         FFT_RANK            = 13;
            static const size_t         FFT_ITEMS           = 1 << FFT_RANK;
            static const size_t         FFT_MESH_POINTS     = MESH_POINTS;
            static const size_t         FILTER_MESH_POINTS  = MESH_POINTS + 2;
            static const size_t         FFT_WINDOW          = dspu::windows::HANN;
            static const size_t         FFT_REFRESH_RATE    = 20;
            static const float          FFT_REACT_TIME_MIN  = 0.000;
            static const float          FFT_REACT_TIME_MAX  = 1.000;
            static const float          FFT_REACT_TIME_DFL  = 0.200;
            static const float          FFT_REACT_TIME_STEP = 0.001;

            enum boost_t
            {
                FB_OFF,
                FB_BT_3DB,
                FB_MT_3DB,
                FB_BT_6DB,
                FB_MT_6DB,

                FB_DEFAULT              = FB_BT_3DB
            };

            enum mode_t
            {
                EM_DOWNWARD,
                EM_UPWARD
            };

            static const size_t EM_DEFAULT              = EM_UPWARD;
        };

        extern const meta::plugin_t mb_expander_mono;
        extern const meta::plugin_t mb_expander_stereo;
        extern const meta::plugin_t mb_expander_lr;
        extern const meta::plugin_t mb_expander_ms;
        extern const meta::plugin_t sc_mb_expander_mono;
        extern const meta::plugin_t sc_mb_expander_stereo;
        extern const meta::plugin_t sc_mb_expander_lr;
        extern const meta::plugin_t sc_mb_expander_ms;
    } // namespace meta
} // namespace lsp


#endif /* PRIVATE_META_MB_EXPANDER_H_ */
