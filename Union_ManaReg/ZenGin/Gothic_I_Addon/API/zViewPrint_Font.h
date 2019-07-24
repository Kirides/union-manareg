// Supported with union (c) 2018 Union team

#ifndef __ZVIEW_PRINT__FONT_H__VER1__
#define __ZVIEW_PRINT__FONT_H__VER1__

namespace Gothic_I_Addon {

  class zCViewFont {
  public:
    zTRnd_AlphaBlendFunc FuncAlphaBlend;
    zCFont* Font;
    zCOLOR Color;
    int Alpha;
    int EnabledBlend;

    void zCViewFont_OnInit( zCFont*, zCOLOR&, int, zTRnd_AlphaBlendFunc ) zCall( 0x0079A4B0 );
    void zCViewFont_OnInit( zCFont*, zCOLOR& )                            zCall( 0x0079A4E0 );
    void zCViewFont_OnInit( zCFont* )                                     zCall( 0x0079A510 );
    void zCViewFont_OnInit()                                              zCall( 0x0079A550 );
    zCViewFont( zCFont* a0, zCOLOR& a1, int a2, zTRnd_AlphaBlendFunc a3 ) zInit( zCViewFont_OnInit( a0, a1, a2, a3 ));
    zCViewFont( zCFont* a0, zCOLOR& a1 )                                  zInit( zCViewFont_OnInit( a0, a1 ));
    zCViewFont( zCFont* a0 )                                              zInit( zCViewFont_OnInit( a0 ));
    zCViewFont()                                                          zInit( zCViewFont_OnInit() );
    ~zCViewFont()                                                         zCall( 0x0079A590 );
    void __fastcall SetFont( zSTRING& )                                   zCall( 0x0079A5A0 );
  };

  class zCViewText2 {
  public:
    int EnabledColor;
    int EnabledTimer;
    zPOS PixelPosition;
    float Timer;
    zSTRING Text;
    zCViewFont ViewFont;

    zCViewText2() {}
    void zCViewText2_OnInit( zSTRING&, zCPosition&, zCOLOR&, float, zCFont*, int, zTRnd_AlphaBlendFunc )          zCall( 0x00799C10 );
    void zCViewText2_OnInit( zSTRING&, zCPosition&, zCOLOR&, zCFont*, int, zTRnd_AlphaBlendFunc )                 zCall( 0x00799D00 );
    void zCViewText2_OnInit( zSTRING&, zCPosition&, zCOLOR&, float, zCFont* )                                     zCall( 0x00799DE0 );
    void zCViewText2_OnInit( zSTRING&, zCPosition&, zCOLOR&, zCFont* )                                            zCall( 0x00799ED0 );
    void zCViewText2_OnInit( zSTRING&, zCPosition&, zCOLOR& )                                                     zCall( 0x00799FB0 );
    void zCViewText2_OnInit( zSTRING&, zCPosition&, float, zCFont* )                                              zCall( 0x0079A090 );
    void zCViewText2_OnInit( zSTRING&, zCPosition&, zCFont* )                                                     zCall( 0x0079A190 );
    void zCViewText2_OnInit( zSTRING&, zCPosition&, float )                                                       zCall( 0x0079A280 );
    void zCViewText2_OnInit( zSTRING&, zCPosition& )                                                              zCall( 0x0079A370 );
    zCViewText2( zSTRING& a0, zCPosition& a1, zCOLOR& a2, float a3, zCFont* a4, int a5, zTRnd_AlphaBlendFunc a6 ) zInit( zCViewText2_OnInit( a0, a1, a2, a3, a4, a5, a6 ));
    zCViewText2( zSTRING& a0, zCPosition& a1, zCOLOR& a2, zCFont* a3, int a4, zTRnd_AlphaBlendFunc a5 )           zInit( zCViewText2_OnInit( a0, a1, a2, a3, a4, a5 ));
    zCViewText2( zSTRING& a0, zCPosition& a1, zCOLOR& a2, float a3, zCFont* a4 )                                  zInit( zCViewText2_OnInit( a0, a1, a2, a3, a4 ));
    zCViewText2( zSTRING& a0, zCPosition& a1, zCOLOR& a2, zCFont* a3 )                                            zInit( zCViewText2_OnInit( a0, a1, a2, a3 ));
    zCViewText2( zSTRING& a0, zCPosition& a1, zCOLOR& a2 )                                                        zInit( zCViewText2_OnInit( a0, a1, a2 ));
    zCViewText2( zSTRING& a0, zCPosition& a1, float a2, zCFont* a3 )                                              zInit( zCViewText2_OnInit( a0, a1, a2, a3 ));
    zCViewText2( zSTRING& a0, zCPosition& a1, zCFont* a2 )                                                        zInit( zCViewText2_OnInit( a0, a1, a2 ));
    zCViewText2( zSTRING& a0, zCPosition& a1, float a2 )                                                          zInit( zCViewText2_OnInit( a0, a1, a2 ));
    zCViewText2( zSTRING& a0, zCPosition& a1 )                                                                    zInit( zCViewText2_OnInit( a0, a1 ));
    ~zCViewText2()                                                                                                zCall( 0x0079A460 );
  };

} // namespace Gothic_I_Addon

#endif // __ZVIEW_PRINT__FONT_H__VER1__