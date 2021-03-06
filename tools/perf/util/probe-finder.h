IntxLNK# i f n d e f   _ P R O B E _ F I N D E R _ H 
 # d e f i n e   _ P R O B E _ F I N D E R _ H 
 
 # i n c l u d e   < s t d b o o l . h > 
 # i n c l u d e   " u t i l . h " 
 # i n c l u d e   " p r o b e - e v e n t . h " 
 
 # d e f i n e   M A X _ P R O B E _ B U F F E R 	 1 0 2 4 
 # d e f i n e   M A X _ P R O B E S 	 	   1 2 8 
 
 s t a t i c   i n l i n e   i n t   i s _ c _ v a r n a m e ( c o n s t   c h a r   * n a m e ) 
 { 
 	 / *   T O D O   * / 
 	 r e t u r n   i s a l p h a ( n a m e [ 0 ] )   | |   n a m e [ 0 ]   = =   ' _ ' ; 
 } 
 
 # i f d e f   D W A R F _ S U P P O R T 
 
 # i n c l u d e   " d w a r f - a u x . h " 
 
 / *   T O D O :   e x p o r t   d e b u g i n f o   d a t a   s t r u c t u r e   e v e n   i f   n o   d w a r f   s u p p o r t   * / 
 
 / *   d e b u g   i n f o r m a t i o n   s t r u c t u r e   * / 
 s t r u c t   d e b u g i n f o   { 
 	 D w a r f 	 	 * d b g ; 
 	 D w f l 	 	 * d w f l ; 
 	 D w a r f _ A d d r 	 b i a s ; 
 } ; 
 
 e x t e r n   s t r u c t   d e b u g i n f o   * d e b u g i n f o _ _ n e w ( c o n s t   c h a r   * p a t h ) ; 
 e x t e r n   s t r u c t   d e b u g i n f o   * d e b u g i n f o _ _ n e w _ o n l i n e _ k e r n e l ( u n s i g n e d   l o n g   a d d r ) ; 
 e x t e r n   v o i d   d e b u g i n f o _ _ d e l e t e ( s t r u c t   d e b u g i n f o   * s e l f ) ; 
 
 / *   F i n d   p r o b e _ t r a c e _ e v e n t s   s p e c i f i e d   b y   p e r f _ p r o b e _ e v e n t   f r o m   d e b u g i n f o   * / 
 e x t e r n   i n t   d e b u g i n f o _ _ f i n d _ t r a c e _ e v e n t s ( s t r u c t   d e b u g i n f o   * s e l f , 
 	 	 	 	 	 s t r u c t   p e r f _ p r o b e _ e v e n t   * p e v , 
 	 	 	 	 	 s t r u c t   p r o b e _ t r a c e _ e v e n t   * * t e v s , 
 	 	 	 	 	 i n t   m a x _ t e v s ) ; 
 
 / *   F i n d   a   p e r f _ p r o b e _ p o i n t   f r o m   d e b u g i n f o   * / 
 e x t e r n   i n t   d e b u g i n f o _ _ f i n d _ p r o b e 