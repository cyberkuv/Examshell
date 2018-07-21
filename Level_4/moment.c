/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moment.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 16:44:29 by tmulaud           #+#    #+#             */
/*   Updated: 2018/07/20 18:05:41 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		n_tmp;
	int		len;

	n_tmp = n;
	len = 0;
	while(n_tmp)
	{
		n_tmp = n_tmp/10;
		len++;
	}
	n_tmp = n;
	if(n < 0)
	{
		len++;
		n = n * -1;
	}
	if (!(str = (char *)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	if(n_tmp < 0)
	{
		str[0] = '-';
	}
	len--;
	while(n)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

int		ft_cal(int n)
{
	if(n >= 2592000)//30 days
		n = n / 2592000;
	else if(n >= 86400)//24 hours
		n = n /86400;
	else if(n >= 3600)//an hour
		n = n / 3600;
	else if(n >= 60)//one minute
		n = n / 60;
	return (n);
}

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char *ret_str;
	int	i;
	int j;

	ret_str = (char *)malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	j = 0;

	while(s1[i])
	{
		ret_str[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		ret_str[i] = s2[j];
		j++;
		i++;
	}
	ret_str[i] = '\0';
	return (ret_str);
}

char	*moment(unsigned int duration)
{
	char *str;
	char *str_dur;
	char *new_str;
	int 	n;
	
	n = ft_cal(duration);
	if(n == 1)
	{
		if(duration >= 2592000)
        	str = " month ago.";
    	else if(duration >= 86400)
        	str = " day ago.";
    	else if(duration >= 3600)
        	str = " hour ago.";
    	else if(duration >= 60)
        	str = " minute ago.";
		else
			str = " second ago.";
	}
	else
    {
        if(duration >= 2592000)
            str = " months ago.";
        else if(duration >= 86400)
            str = " days ago.";
        else if(duration >= 3600)
            str = " hours ago.";
        else if(duration >= 60)
            str = " minutes ago.";
        else
            str = " seconds ago.";
    }

	if(n)
		str_dur = ft_itoa(n);
	else
		str_dur = "0";
	new_str = ft_strjoin(str_dur, str);
	return (new_str);
}
