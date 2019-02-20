//
//  UIView+PASAnimations.h
//  ProatomicCore
//
//  Created by Guillermo Sáenz on 5/13/16.
//  Copyright © 2016 Property Atomic Strong SAC. All rights reserved.
//

@import UIKit;

/**
 Extiende el funcionamiento de las UIView con animaciones.
 */

@interface UIView (PASAnimations)

#pragma mark - Animaciones para agregar
/**
 Usa un efecto de Zoom Out para agregar una subview.
 */
- (void)addSubviewConZoomOutAnimation:(UIView *)viewAAgregar belowView:(UIView*)belowView conAlphaFinal:(const float)alpha conTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;
/**
 Usa un efecto de Zoom In para agregar una subview.
 */
- (void)addSubviewConFullZoomInAnimation:(UIView *)viewAAgregar belowView:(UIView*)belowView conCentroFinal:(const CGPoint)centro conTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;
/**
 Usa un efecto de cambio de Alpha para agregar una subview.
 */
- (void)addSubviewConCambioDeAlpha:(UIView*)view aboveSubview:(UIView*)belowView conAlphaFinal:(const float)alpha conTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;

#pragma mark - Animaciones para remover
/**
 Usa un efecto de Zoom In para remover una subview.
 */
- (void)removerSubviewConZoomInAnimationConTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;
/**
 Usa un efecto de Zoom Out para remover una subview.
 */
- (void)removerSubviewConFullZoomOutAnimationConCentroFinal:(const CGPoint)centroFinal conTiempo:(float)segs completion:(void (^)(BOOL finished))completion;
/**
 Usa un efecto de cambio de Alpha para remover una subview.
 */
- (void)removerSubViewConCambioDeAlphaConTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;
/**
 Remueve una subview despues de llevarla a una posicion determinada.
 */
- (void)removerSubViewDespuesDeMovidaConCentroFinal:(const CGPoint)centroFinal conTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;

#pragma mark - Animaciones para mostrar
/**
 Usa un efecto de Zoom In para mostrar una subview.
 */
- (void)mostrarSubViewConZoomInAnimationConTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;
/**
 Usa un efecto de cambio de Alpha para mostrar una subview.
 */
- (void)mostrarSubViewConCambioDeAlphaConTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;
/**
 Uso particular para mover una subviews dentro de los bounds visibles de su contenedor.
 */
- (void)meterSubviewConTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;

#pragma mark - Animaciones para esconder
/**
 Usa un efecto de Zoom In para esconder una subview.
 */
- (void)esconderSubViewConZoomInAnimationConTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;
/**
 Usa un efecto de cambio de Alpha para esconder una subview.
 */
- (void)esconderSubViewConCambioDeAlphaConTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;
/**
 Uso particular para mover una subview fuera de los bounds visibles de su contenedor.
 */
- (void)sacarSubviewConTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;

#pragma mark - Animaciones para mover/resize
/**
 Gira 360 grados una subview.
 */
- (void)girarUnaVueltaEnSuEjeConTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;
/**
 Mueve una subview a una posicion determinada.
 */
- (void)moverSubviewConCentroFinal:(const CGPoint)centroFinal conTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;
/**
 Cambia el size de una subview a un size determinado.
 */
- (void)resizeSubviewConAltoFinal:(const CGFloat)alto conAnchoFinal:(const CGFloat)ancho conTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;
/**
 Cambia el size y posicion de una subview a un size y posicion determinada.
 */
- (void)moverResizeSubviewConCGRectFinal:(const CGRect)rect conTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;
/**
 Cambia el alpha con animacion a un alpha determiando.
 */
- (void)cambiarAlpha:(const float)alpha conTiempo:(const float)segs completion:(void (^)(BOOL finished))completion;

- (void)addMotionEffectWithMagnitude:(CGFloat)magnitudeValue;

@end
