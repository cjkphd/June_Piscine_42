ldapsearch -Q "uid=z*" | grep "cn:" | cut -c5-100 | sort -f -r 
