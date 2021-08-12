// 0x0C00010C
const GeoLayout unagi_geo[] = {
   GEO_CULLING_RADIUS(2000),
   GEO_OPEN_NODE(),
      GEO_SCALE(0x00, 16384),
      GEO_OPEN_NODE(),
         GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
         GEO_OPEN_NODE(),
            GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, unagi_seg5_dl_0500D268),
            GEO_OPEN_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, 245, 0, 0, unagi_seg5_dl_0500D468),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 494, 0, 0, unagi_seg5_dl_0500D668),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 475, 0, 0, unagi_seg5_dl_0500D828),
                     GEO_OPEN_NODE(),
                        GEO_SWITCH_CASE(2, geo_switch_anim_state),
                        GEO_OPEN_NODE(),
                           GEO_NODE_START(),
                           GEO_NODE_START(),
                           GEO_OPEN_NODE(),
                              GEO_SCALE(0x00, 16384),
                              GEO_OPEN_NODE(),
                                 GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2000, 0, 0, 0, 0, 0, gfx_polystar),
                                 GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 2000, 0, 0, 0, 0, 0, gfx_polystar_eye),
                              GEO_CLOSE_NODE(),
                           GEO_CLOSE_NODE(),
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
               GEO_ANIMATED_PART(LAYER_OPAQUE, -254, 0, 0, NULL),
               GEO_OPEN_NODE(),
                  GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, unagi_seg5_dl_0500D050),
                  GEO_OPEN_NODE(),
                     GEO_ANIMATED_PART(LAYER_ALPHA, 527, 0, 0, unagi_seg5_dl_0500DEB8),
                     GEO_OPEN_NODE(),
                        GEO_ANIMATED_PART(LAYER_OPAQUE, 226, 65, 0, NULL),
                        GEO_OPEN_NODE(),
                           GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, unagi_seg5_dl_0500E258),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, unagi_seg5_dl_0500CDD0),
                           GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
                        GEO_CLOSE_NODE(),
                     GEO_CLOSE_NODE(),
                     GEO_ANIMATED_PART(LAYER_ALPHA, 527, 0, 0, unagi_seg5_dl_0500E088),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 527, 0, 0, unagi_seg5_dl_0500DD08),
                     GEO_ANIMATED_PART(LAYER_OPAQUE, 527, 0, 0, NULL),
                  GEO_CLOSE_NODE(),
               GEO_CLOSE_NODE(),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
