#ifndef NORMAL_REGULAR_FONT_H
#define NORMAL_REGULAR_FONT_H

#include <stdint.h>

const uint8_t normalRegularFontBitmaps[] = 
{
	// @0 '!' (1 pixels wide)
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @13 '"' (3 pixels wide)
	0xA0, // # #
	0xA0, // # #
	0xA0, // # #
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	// @26 '#' (7 pixels wide)
	0x00, //        
	0x24, //   #  # 
	0x24, //   #  # 
	0xFE, // #######
	0x48, //  #  #  
	0x48, //  #  #  
	0xFC, // ###### 
	0x48, //  #  #  
	0x90, // #  #   
	0x90, // #  #   
	0x00, //        
	0x00, //        
	0x00, //        

	// @39 '$' (5 pixels wide)
	0x20, //   #  
	0x78, //  ####
	0x80, // #    
	0x80, // #    
	0x40, //  #   
	0x20, //   #  
	0x10, //    # 
	0x08, //     #
	0x08, //     #
	0xF0, // #### 
	0x20, //   #  
	0x00, //      
	0x00, //      

	// @52 '%' (8 pixels wide)
	0x00, //         
	0x62, //  ##   # 
	0x92, // #  #  # 
	0x94, // #  # #  
	0x68, //  ## #   
	0x10, //    #    
	0x16, //    # ## 
	0x29, //   # #  #
	0x49, //  #  #  #
	0x86, // #    ## 
	0x00, //         
	0x00, //         
	0x00, //         

	// @65 '&' (7 pixels wide)
	0x78, //  ####  
	0x88, // #   #  
	0x88, // #   #  
	0x88, // #   #  
	0x7E, //  ######
	0x88, // #   #  
	0x88, // #   #  
	0x88, // #   #  
	0x88, // #   #  
	0x76, //  ### ##
	0x00, //        
	0x00, //        
	0x00, //        

	// @78 ''' (1 pixels wide)
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  

	// @91 '(' (2 pixels wide)
	0x40, //  #
	0x40, //  #
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x40, //  #
	0x40, //  #

	// @104 ')' (2 pixels wide)
	0x80, // # 
	0x80, // # 
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x80, // # 
	0x80, // # 

	// @117 '*' (5 pixels wide)
	0x20, //   #  
	0xF8, // #####
	0x20, //   #  
	0x50, //  # # 
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @130 '+' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x20, //   #  
	0x20, //   #  
	0xF8, // #####
	0x20, //   #  
	0x20, //   #  
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @143 ',' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0x40, //  #
	0x40, //  #
	0x80, // # 
	0x00, //   

	// @156 '-' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0xE0, // ###
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	// @169 '.' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @182 '/' (4 pixels wide)
	0x00, //     
	0x10, //    #
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x80, // #   
	0x80, // #   
	0x00, //     
	0x00, //     
	0x00, //     

	// @195 '0' (6 pixels wide)
	0x00, //       
	0x30, //   ##  
	0x48, //  #  # 
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x48, //  #  # 
	0x30, //   ##  
	0x00, //       
	0x00, //       
	0x00, //       

	// @208 '1' (3 pixels wide)
	0x00, //    
	0x20, //   #
	0x60, //  ##
	0xA0, // # #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x00, //    
	0x00, //    
	0x00, //    

	// @221 '2' (6 pixels wide)
	0x00, //       
	0x78, //  #### 
	0x84, // #    #
	0x04, //      #
	0x04, //      #
	0x08, //     # 
	0x10, //    #  
	0x20, //   #   
	0x40, //  #    
	0xFC, // ######
	0x00, //       
	0x00, //       
	0x00, //       

	// @234 '3' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x08, //     #
	0x08, //     #
	0x30, //   ## 
	0x08, //     #
	0x08, //     #
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @247 '4' (6 pixels wide)
	0x00, //       
	0x08, //     # 
	0x18, //    ## 
	0x28, //   # # 
	0x28, //   # # 
	0x48, //  #  # 
	0x88, // #   # 
	0xFC, // ######
	0x08, //     # 
	0x08, //     # 
	0x00, //       
	0x00, //       
	0x00, //       

	// @260 '5' (5 pixels wide)
	0x00, //      
	0xF8, // #####
	0x80, // #    
	0x80, // #    
	0xF0, // #### 
	0x88, // #   #
	0x08, //     #
	0x08, //     #
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @273 '6' (5 pixels wide)
	0x00, //      
	0x10, //    # 
	0x20, //   #  
	0x40, //  #   
	0x80, // #    
	0xF0, // #### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @286 '7' (6 pixels wide)
	0x00, //       
	0xFC, // ######
	0x08, //     # 
	0x08, //     # 
	0x10, //    #  
	0x10, //    #  
	0x20, //   #   
	0x20, //   #   
	0x20, //   #   
	0x40, //  #    
	0x00, //       
	0x00, //       
	0x00, //       

	// @299 '8' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0x50, //  # # 
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @312 '9' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x78, //  ####
	0x08, //     #
	0x10, //    # 
	0x20, //   #  
	0x40, //  #   
	0x00, //      
	0x00, //      
	0x00, //      

	// @325 ':' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x00, //  
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @338 ';' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x40, //  #
	0x40, //  #
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0x40, //  #
	0x40, //  #
	0x80, // # 
	0x00, //   

	// @351 '<' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x08, //     #
	0x30, //   ## 
	0x40, //  #   
	0x80, // #    
	0x40, //  #   
	0x30, //   ## 
	0x08, //     #
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @364 '=' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0xF8, // #####
	0x00, //      
	0xF8, // #####
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @377 '>' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x80, // #    
	0x60, //  ##  
	0x10, //    # 
	0x08, //     #
	0x10, //    # 
	0x60, //  ##  
	0x80, // #    
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @390 '?' (4 pixels wide)
	0xE0, // ### 
	0x10, //    #
	0x10, //    #
	0x10, //    #
	0x20, //   # 
	0x40, //  #  
	0x40, //  #  
	0x00, //     
	0x40, //  #  
	0x40, //  #  
	0x00, //     
	0x00, //     
	0x00, //     

	// @403 '@' (10 pixels wide)
	0x1E, 0x00, //    ####   
	0x21, 0x00, //   #    #  
	0x4C, 0x80, //  #  ##  # 
	0x82, 0x40, // #     #  #
	0x8E, 0x40, // #   ###  #
	0x92, 0x40, // #  #  #  #
	0x92, 0x80, // #  #  # # 
	0x9F, 0x80, // #  ###### 
	0x40, 0x00, //  #        
	0x20, 0x00, //   #       
	0x1E, 0x00, //    ####   
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @429 'A' (7 pixels wide)
	0x00, //        
	0x10, //    #   
	0x28, //   # #  
	0x28, //   # #  
	0x28, //   # #  
	0x44, //  #   # 
	0x44, //  #   # 
	0x7C, //  ##### 
	0x82, // #     #
	0x82, // #     #
	0x00, //        
	0x00, //        
	0x00, //        

	// @442 'B' (5 pixels wide)
	0x00, //      
	0xF0, // #### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0xF0, // #### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0xF0, // #### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @455 'C' (6 pixels wide)
	0x00, //       
	0x38, //   ### 
	0x44, //  #   #
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x44, //  #   #
	0x38, //   ### 
	0x00, //       
	0x00, //       
	0x00, //       

	// @468 'D' (6 pixels wide)
	0x00, //       
	0xF0, // ####  
	0x88, // #   # 
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x88, // #   # 
	0xF0, // ####  
	0x00, //       
	0x00, //       
	0x00, //       

	// @481 'E' (5 pixels wide)
	0x00, //      
	0xF8, // #####
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0xF0, // #### 
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0xF8, // #####
	0x00, //      
	0x00, //      
	0x00, //      

	// @494 'F' (5 pixels wide)
	0x00, //      
	0xF8, // #####
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0xF0, // #### 
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0x00, //      
	0x00, //      
	0x00, //      

	// @507 'G' (7 pixels wide)
	0x00, //        
	0x3C, //   #### 
	0x42, //  #    #
	0x80, // #      
	0x80, // #      
	0x8E, // #   ###
	0x82, // #     #
	0x82, // #     #
	0x42, //  #    #
	0x3C, //   #### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @520 'H' (7 pixels wide)
	0x00, //        
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0xFE, // #######
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x00, //        
	0x00, //        
	0x00, //        

	// @533 'I' (1 pixels wide)
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @546 'J' (5 pixels wide)
	0x00, //      
	0x08, //     #
	0x08, //     #
	0x08, //     #
	0x08, //     #
	0x08, //     #
	0x08, //     #
	0x08, //     #
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @559 'K' (6 pixels wide)
	0x00, //       
	0x88, // #   # 
	0x90, // #  #  
	0x90, // #  #  
	0xA0, // # #   
	0xE0, // ###   
	0x90, // #  #  
	0x90, // #  #  
	0x88, // #   # 
	0x84, // #    #
	0x00, //       
	0x00, //       
	0x00, //       

	// @572 'L' (5 pixels wide)
	0x00, //      
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0xF8, // #####
	0x00, //      
	0x00, //      
	0x00, //      

	// @585 'M' (9 pixels wide)
	0x00, 0x00, //          
	0x41, 0x00, //  #     # 
	0x41, 0x00, //  #     # 
	0x41, 0x00, //  #     # 
	0x63, 0x00, //  ##   ## 
	0xA2, 0x80, // # #   # #
	0x94, 0x80, // #  # #  #
	0x94, 0x80, // #  # #  #
	0x88, 0x80, // #   #   #
	0x88, 0x80, // #   #   #
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @611 'N' (6 pixels wide)
	0x00, //       
	0x84, // #    #
	0xC4, // ##   #
	0xC4, // ##   #
	0xA4, // # #  #
	0xA4, // # #  #
	0x94, // #  # #
	0x94, // #  # #
	0x8C, // #   ##
	0x84, // #    #
	0x00, //       
	0x00, //       
	0x00, //       

	// @624 'O' (7 pixels wide)
	0x00, //        
	0x38, //   ###  
	0x44, //  #   # 
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x44, //  #   # 
	0x38, //   ###  
	0x00, //        
	0x00, //        
	0x00, //        

	// @637 'P' (5 pixels wide)
	0x00, //      
	0xF0, // #### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0xF0, // #### 
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0x00, //      
	0x00, //      
	0x00, //      

	// @650 'Q' (8 pixels wide)
	0x00, //         
	0x38, //   ###   
	0x44, //  #   #  
	0x82, // #     # 
	0x82, // #     # 
	0x82, // #     # 
	0x82, // #     # 
	0x82, // #     # 
	0x44, //  #   #  
	0x38, //   ###   
	0x0C, //     ##  
	0x03, //       ##
	0x00, //         

	// @663 'R' (7 pixels wide)
	0x00, //        
	0xF8, // #####  
	0x84, // #    # 
	0x84, // #    # 
	0x84, // #    # 
	0xF8, // #####  
	0x90, // #  #   
	0x88, // #   #  
	0x84, // #    # 
	0x82, // #     #
	0x00, //        
	0x00, //        
	0x00, //        

	// @676 'S' (5 pixels wide)
	0x00, //      
	0x78, //  ####
	0x80, // #    
	0x80, // #    
	0x40, //  #   
	0x20, //   #  
	0x10, //    # 
	0x08, //     #
	0x08, //     #
	0xF0, // #### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @689 'T' (7 pixels wide)
	0x00, //        
	0xFE, // #######
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x00, //        
	0x00, //        
	0x00, //        

	// @702 'U' (6 pixels wide)
	0x00, //       
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x78, //  #### 
	0x00, //       
	0x00, //       
	0x00, //       

	// @715 'V' (7 pixels wide)
	0x00, //        
	0x82, // #     #
	0x82, // #     #
	0x44, //  #   # 
	0x44, //  #   # 
	0x44, //  #   # 
	0x28, //   # #  
	0x28, //   # #  
	0x28, //   # #  
	0x10, //    #   
	0x00, //        
	0x00, //        
	0x00, //        

	// @728 'W' (11 pixels wide)
	0x00, 0x00, //            
	0x84, 0x20, // #    #    #
	0x84, 0x20, // #    #    #
	0x8A, 0x20, // #   # #   #
	0x4A, 0x40, //  #  # #  # 
	0x4A, 0x40, //  #  # #  # 
	0x51, 0x40, //  # #   # # 
	0x51, 0x40, //  # #   # # 
	0x51, 0x40, //  # #   # # 
	0x20, 0x80, //   #     #  
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            

	// @754 'X' (7 pixels wide)
	0x00, //        
	0x82, // #     #
	0x44, //  #   # 
	0x28, //   # #  
	0x28, //   # #  
	0x10, //    #   
	0x28, //   # #  
	0x28, //   # #  
	0x44, //  #   # 
	0x82, // #     #
	0x00, //        
	0x00, //        
	0x00, //        

	// @767 'Y' (7 pixels wide)
	0x00, //        
	0x82, // #     #
	0x44, //  #   # 
	0x28, //   # #  
	0x28, //   # #  
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x00, //        
	0x00, //        
	0x00, //        

	// @780 'Z' (5 pixels wide)
	0x00, //      
	0xF8, // #####
	0x10, //    # 
	0x10, //    # 
	0x20, //   #  
	0x20, //   #  
	0x40, //  #   
	0x40, //  #   
	0x80, // #    
	0xF8, // #####
	0x00, //      
	0x00, //      
	0x00, //      

	// @793 '[' (3 pixels wide)
	0xE0, // ###
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0xE0, // ###

	// @806 '\' (4 pixels wide)
	0x00, //     
	0x80, // #   
	0x80, // #   
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0x10, //    #
	0x00, //     
	0x00, //     
	0x00, //     

	// @819 ']' (3 pixels wide)
	0xE0, // ###
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0xE0, // ###

	// @832 '^' (5 pixels wide)
	0x20, //   #  
	0x50, //  # # 
	0x50, //  # # 
	0x88, // #   #
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @845 '_' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0xFE, // #######
	0x00, //        

	// @858 '`' (2 pixels wide)
	0x80, // # 
	0x40, //  #
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @871 'a' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0x08, //     #
	0x08, //     #
	0x78, //  ####
	0x88, // #   #
	0x98, // #  ##
	0x68, //  ## #
	0x00, //      
	0x00, //      
	0x00, //      

	// @884 'b' (5 pixels wide)
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0xF0, // #### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0xF0, // #### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @897 'c' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @910 'd' (5 pixels wide)
	0x08, //     #
	0x08, //     #
	0x08, //     #
	0x78, //  ####
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x78, //  ####
	0x00, //      
	0x00, //      
	0x00, //      

	// @923 'e' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0xF8, // #####
	0x80, // #    
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @936 'f' (4 pixels wide)
	0x30, //   ##
	0x40, //  #  
	0x40, //  #  
	0xF0, // ####
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x00, //     
	0x00, //     
	0x00, //     

	// @949 'g' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x7C, //  #####
	0x88, // #   # 
	0x88, // #   # 
	0x88, // #   # 
	0x70, //  ###  
	0x80, // #     
	0xF8, // ##### 
	0x04, //      #
	0x84, // #    #
	0x78, //  #### 

	// @962 'h' (5 pixels wide)
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0xF0, // #### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x00, //      
	0x00, //      
	0x00, //      

	// @975 'i' (2 pixels wide)
	0x40, //  #
	0x40, //  #
	0x00, //   
	0xC0, // ##
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x00, //   
	0x00, //   
	0x00, //   

	// @988 'j' (3 pixels wide)
	0x20, //   #
	0x20, //   #
	0x00, //    
	0x60, //  ##
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0xC0, // ## 

	// @1001 'k' (6 pixels wide)
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x88, // #   # 
	0x90, // #  #  
	0xA0, // # #   
	0xE0, // ###   
	0x90, // #  #  
	0x88, // #   # 
	0x84, // #    #
	0x00, //       
	0x00, //       
	0x00, //       

	// @1014 'l' (2 pixels wide)
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x40, //  #
	0x00, //   
	0x00, //   
	0x00, //   

	// @1027 'm' (9 pixels wide)
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0xB3, 0x00, // # ##  ## 
	0xCC, 0x80, // ##  ##  #
	0x88, 0x80, // #   #   #
	0x88, 0x80, // #   #   #
	0x88, 0x80, // #   #   #
	0x88, 0x80, // #   #   #
	0x88, 0x80, // #   #   #
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @1053 'n' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0xF0, // #### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x00, //      
	0x00, //      
	0x00, //      

	// @1066 'o' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @1079 'p' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0xF0, // #### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0xF0, // #### 
	0x80, // #    
	0x80, // #    
	0x80, // #    

	// @1092 'q' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x78, //  ####
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x78, //  ####
	0x08, //     #
	0x08, //     #
	0x08, //     #

	// @1105 'r' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x00, //     
	0xB0, // # ##
	0xC0, // ##  
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x80, // #   
	0x00, //     
	0x00, //     
	0x00, //     

	// @1118 's' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x00, //     
	0x70, //  ###
	0x80, // #   
	0x80, // #   
	0x60, //  ## 
	0x10, //    #
	0x10, //    #
	0xE0, // ### 
	0x00, //     
	0x00, //     
	0x00, //     

	// @1131 't' (4 pixels wide)
	0x00, //     
	0x40, //  #  
	0x40, //  #  
	0xF0, // ####
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x30, //   ##
	0x00, //     
	0x00, //     
	0x00, //     

	// @1144 'u' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x78, //  ####
	0x00, //      
	0x00, //      
	0x00, //      

	// @1157 'v' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x88, // #   #
	0x88, // #   #
	0x50, //  # # 
	0x50, //  # # 
	0x50, //  # # 
	0x20, //   #  
	0x20, //   #  
	0x00, //      
	0x00, //      
	0x00, //      

	// @1170 'w' (9 pixels wide)
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x88, 0x80, // #   #   #
	0x88, 0x80, // #   #   #
	0x55, 0x00, //  # # # # 
	0x55, 0x00, //  # # # # 
	0x55, 0x00, //  # # # # 
	0x22, 0x00, //   #   #  
	0x22, 0x00, //   #   #  
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @1196 'x' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x88, // #   #
	0x50, //  # # 
	0x50, //  # # 
	0x20, //   #  
	0x50, //  # # 
	0x50, //  # # 
	0x88, // #   #
	0x00, //      
	0x00, //      
	0x00, //      

	// @1209 'y' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x84, // #    #
	0x84, // #    #
	0x48, //  #  # 
	0x48, //  #  # 
	0x48, //  #  # 
	0x30, //   ##  
	0x10, //    #  
	0x10, //    #  
	0x20, //   #   
	0x40, //  #    

	// @1222 'z' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x08, //     # 
	0x10, //    #  
	0x20, //   #   
	0x20, //   #   
	0x40, //  #    
	0xFC, // ######
	0x00, //       
	0x00, //       
	0x00, //       

	// @1235 '{' (4 pixels wide)
	0x00, //     
	0x30, //   ##
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x80, // #   
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x30, //   ##

	// @1248 '|' (1 pixels wide)
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  

	// @1261 '}' (4 pixels wide)
	0x00, //     
	0xC0, // ##  
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0x10, //    #
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0xC0, // ##  

	// @1274 '~' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0xC8, // ##  #
	0xB8, // # ###
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
};

const FONT_CHAR_INFO normalRegularFontDescriptors[] = 
{
	{1, 0}, 		// ! 
	{3, 13}, 		// " 
	{7, 26}, 		// # 
	{5, 39}, 		// $ 
	{8, 52}, 		// % 
	{7, 65}, 		// & 
	{1, 78}, 		// ' 
	{2, 91}, 		// ( 
	{2, 104}, 		// ) 
	{5, 117}, 		// * 
	{5, 130}, 		// + 
	{2, 143}, 		// , 
	{3, 156}, 		// - 
	{1, 169}, 		// . 
	{4, 182}, 		// / 
	{6, 195}, 		// 0 
	{3, 208}, 		// 1 
	{6, 221}, 		// 2 
	{5, 234}, 		// 3 
	{6, 247}, 		// 4 
	{5, 260}, 		// 5 
	{5, 273}, 		// 6 
	{6, 286}, 		// 7 
	{5, 299}, 		// 8 
	{5, 312}, 		// 9 
	{1, 325}, 		// : 
	{2, 338}, 		// ; 
	{5, 351}, 		// < 
	{5, 364}, 		// = 
	{5, 377}, 		// > 
	{4, 390}, 		// ? 
	{10, 403}, 		// @ 
	{7, 429}, 		// A 
	{5, 442}, 		// B 
	{6, 455}, 		// C 
	{6, 468}, 		// D 
	{5, 481}, 		// E 
	{5, 494}, 		// F 
	{7, 507}, 		// G 
	{7, 520}, 		// H 
	{1, 533}, 		// I 
	{5, 546}, 		// J 
	{6, 559}, 		// K 
	{5, 572}, 		// L 
	{9, 585}, 		// M 
	{6, 611}, 		// N 
	{7, 624}, 		// O 
	{5, 637}, 		// P 
	{8, 650}, 		// Q 
	{7, 663}, 		// R 
	{5, 676}, 		// S 
	{7, 689}, 		// T 
	{6, 702}, 		// U 
	{7, 715}, 		// V 
	{11, 728}, 		// W 
	{7, 754}, 		// X 
	{7, 767}, 		// Y 
	{5, 780}, 		// Z 
	{3, 793}, 		// [ 
	{4, 806}, 		// \ 
	{3, 819}, 		// ] 
	{5, 832}, 		// ^ 
	{7, 845}, 		// _ 
	{2, 858}, 		// ` 
	{5, 871}, 		// a 
	{5, 884}, 		// b 
	{5, 897}, 		// c 
	{5, 910}, 		// d 
	{5, 923}, 		// e 
	{4, 936}, 		// f 
	{6, 949}, 		// g 
	{5, 962}, 		// h 
	{2, 975}, 		// i 
	{3, 988}, 		// j 
	{6, 1001}, 		// k 
	{2, 1014}, 		// l 
	{9, 1027}, 		// m 
	{5, 1053}, 		// n 
	{5, 1066}, 		// o 
	{5, 1079}, 		// p 
	{5, 1092}, 		// q 
	{4, 1105}, 		// r 
	{4, 1118}, 		// s 
	{4, 1131}, 		// t 
	{5, 1144}, 		// u 
	{5, 1157}, 		// v 
	{9, 1170}, 		// w 
	{5, 1196}, 		// x 
	{6, 1209}, 		// y 
	{6, 1222}, 		// z 
	{4, 1235}, 		// { 
	{1, 1248}, 		// | 
	{4, 1261}, 		// } 
	{5, 1274}, 		// ~ 
};

const FONT_CHAR_INFO_LOOKUP normalRegularFontBlockLookup[] = 
{
	{'!', '~', normalRegularFontDescriptors}
};

const FONT_INFO normalRegularFontInfo =
{
	13, //  Character height
	'!', //  Start character
	'~', //  End character
	1,
	2, //  Width, in pixels, of space character
	normalRegularFontBlockLookup,
	1,
	normalRegularFontBitmaps, //  Character bitmap array
};


#endif /* NORMAL_REGULAR_FONT_H */