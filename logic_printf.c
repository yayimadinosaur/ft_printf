man 3 stdarg

va_arg	-	creates list of the args (probably in struct)
			inside va_list
va_copy	-	copies list from src to dest

va_arg	-	checks type of result of va_copy
				if fail return 0?
va_end	-	finished with current arg




//mandatory
You have to recode the libc’s printf function.
• Your function will be called ft_printf and will be prototyped similarly to printf.
• You won’t do the buffer management in the printf function.
• You have to manage the following conversions: sSpdDioOuUxXcC
• You must manage %%
• You must manage the flags #0-+ and space
• You must manage the minimum field-width
• You must manage the precision
• You must manage the flags hh, h, l, ll, j, et z.

//notes from making ft_printf
//for int param, if its not <= # of params (negatives results in 0), will print garbage value (because no param to refer to)
//
//look up e_num
