# Codificación caso de huéspedes
> Ejercicio de diseño y programación orientada a objetos con C++. 
Enunciado creado para el curso de Programación Orientada a Objetos - Pontificia Universidad Javeriana - Cali

## Enunciado 
La red de soporte de la ciudad de Manizales es una iniciativa que busca conectar personas. Por una parte se encuentran las personas de municipios y veredas que tienen que acompañar a sus familiares en alguno de los hospitales de la ciudad pero que no cuentan con familiares o con el dinero para pagar por el alojamiento.  Por otra parte, se encuentran los propietarios de viviendas de la ciudad que tienen en su hogar espacio disponible para acoger a estas personas de manera gratuita.  
Con el ánimo de ofrecer mayor seguridad para ambos tipos de personas los fundadores de la red quieren crear una aplicación que funcione como Airbnb y sirva para conectar a ambos tipos de poblaciones.  Usted ha sido encargado de elaborar un primer prototipo de esta aplicación. Para ello tenga en cuenta la siguiente información: 

Una persona puede ser un propietario o un huésped.  Tanto los propietarios como los huéspedes tienen una identificación, un nombre completo, sexo, fecha nacimiento y un puntaje. El puntaje es una herramienta de control social que sirve para que una persona demuestre su confiabilidad ante las otras personas de la red.  Este puntaje se calcula con las evaluaciones en el sistema como se explicará más adelante.

En el sistema cada propietario tendrá un hogar.  Cada hogar tiene una dirección, un número de camas disponibles, una variable para indicar si puede alojar o no bebés, un texto para describir el hogar. Además en el sistema los propietarios tendrán una variable para controlar si pueden recibir huéspedes o no.  Por su parte los huéspedes tendrán información respecto a la clínica en la que tiene el familiar cercano y su ciudad/municipio/corregimiento de origen.

Se esperan las siguientes funcionalidades para el prototipo

* El propietario puede agregar información de su hogar. 
* El sistema de propietarios tendrá la lista de personas inscritas en el sistema. 
* El sistema permitirá crear reservas. Una reserva relaciona los huéspedes con los propietarios. Para ello cada reserva tiene una fecha de inicio, fecha de fin, un propietario asociado y un huésped asociado. Cuando se crea una reserva se cambia la variable que controla la disponibilidad del propietario para indicar que estará ocupado.  
* El sistema tendrá una lista de reservas. 
* El sistema permitirá liberar reservas. Una reserva se podrá liberar cuando el huesped haya abandonado el hogar del inquilino. Liberar una reserva significa borrarla del sistema. 
* El sistema permitirá agregar evaluaciones. Cada evaluación está formada por una fecha, una calificación de 1 a 5, un mensaje de comentarios, la persona a la que se dirige y la persona que hizo la evaluación.  Cada vez que se agrega una evaluación el sistema recalcula el puntaje de la persona a la que se dirige la evaluación considerando el nuevo puntaje ( (nota anterior + nueva nota)/2 )  y actualiza su puntaje.  El sistema almacena la lista de evaluaciones. 

## Ejercicio
> Actividad en parejas
### Diseño
* Elabore el diagrama UML que represente los aspectos más importantes que requiere este enunciado para dar respuesta el ejercicio
* Complete el .README con el link al diagrama de clases y la imagen del diagrama de clases resultante. 

### Investigación
  * Investigue qué son las Actions en Github,  vaya a "Github actions", agregue un nuevo workflow que permita compilar su proyecto basado en Cmake. Configure la acción para que se ejecute cada ves que se hace push en la rama principal de su proyecto (main).
  *  Investigue qué es un LINTER [Aquí hay una primer explicación que le puede servir de referencia para comenzar](https://www.testim.io/blog/what-is-a-linter-heres-a-definition-and-quick-start-guide/). Configure una action de github actions para incorporar verificaciones de un linter para c++ cada vez que se hace un pusha al repositorio. 

### Codificación
* Codifique todas la funcionalidades propuestas en el enunciado. Tenga encuenta que:
  * Su programa debe tener menu, un main, y seguir un esquema similar a lo que hemos usado en clase
  * Su programa debe seguir el estándar de codificación camelCase. Tener nombres claros, y calidad suficientes para estudiantes que llevan casi año y medio programando.
  * De formato al código fuente y corrija los errores menores que el revisor estático de CLION detecte antes de subir su código fuente al repositorio. 
  * Modifique el .gitignore para ignorar todos los archivos de trabajo que no se deberían considerar en el proyecto

### DIAGRAMA UML
* Diagrama UML del programa:
* [Diagrama UML de AlojamientoGratuito](https://viewer.diagrams.net/?tags=%7B%7D&highlight=0000FF&edit=_blank&layers=1&nav=1&title=UMLAlojamientoGratiuto.drawio#R7Vxtc5u4Fv41mbnbme6YV9sf%2FZJsupvuppvmbnu%2FdGRQjLqAWIGbuL9%2Bj0C8SrYhhqRzh5lMiw5CBj2PDo%2BOjrgwVsHTLwxF3nvqYv9Cn7hPF8b6Qtfn8yn8yw37zGCZs8ywZcTNTFppuCPfsTBOhHVHXBzXKiaU%2BgmJ6kaHhiF2kpoNMUYf69UeqF%2F%2F1QhtsWS4c5AvW%2F8ibuIJq2bPyxPXmGw98dMzXTxwgPLK4kliD7n0sWIyLi%2BMFaM0yY6CpxX2ed%2Fl%2FZJdd3XgbHFjDIdJmwv%2Bd%2F3l9%2F9qM2RN7n9bkL%2BC249fbt%2BKVr4hfyce%2BBazmIZI3HOyzzsifiSBj0IoLR9omNyJMxqUkU%2B2IRw7cCeYgeEbZgmBPlyIEwmNwOp4xHdv0J7u%2BP3GCXL%2BzktLjzLyHZpFvmgTTrNE0EG3azXu%2BJVgnoCV4Rjq3OadoDVM79FTreINihNhcKjvoygmm%2BIxAsS2JFzSJKGBqCT3cd5h8IT4qWISff4LpgFO2B6qiLOGJfDf59QR5ceSTgXbvQqTtJkwIkHhbdF2iTIcCKA7gK5LoL9NL4GHJA%2BAm0MooLbgo5bueP8AALqh8Q7hFUMabBjOKsQJI%2BG2USHGTzQ7vYGh2jj5gB0P8aYxbwp%2BKyDwu%2FRIc9EOUP8qfpAAEE1qAhJJShlG%2F8Yr6lPg4DqkGVeJ7zdMOV19%2FJAcJGscwa2F25u0ztosLX8KhLiJwrUPfjqoPeJC%2F3Gi0QQlKGMVf4KIwi2nCFpL%2BANMV5OfrQsLbnwFZa0swx%2BvzpIVDeFZEEk5h4Gyj5jTVsHGo2P6NEUFJXl3t2LkxByIkYbESAlkn6TgZSDnrlh7FsIBYOXjEtKPHPH1W02C3ZBhNxQQ%2B2iD%2FVsakyQdOGuW1W1AfwrdOn1J6GFGhkRdM1o6otlAoJsK0Jf8lY%2Bh0%2FSrOP2v8ATZuYDyvmNrlND4Pz%2BNnqB3TszaccLUzycF2muX6F04X3j2u%2FXMu3%2F0369zUlQwxS4IMlGELvHoFuSJf1laoaN3oYtd0c1lnRuaDmw%2Brr%2FiJNkLOYF2%2FHWz9JIgFxv4iSSf%2BOXQ%2FVnps2iMH6%2BfqoV9XgjhcT9VC5%2FLFnixvCwt5dcdlBQx3TFHPPP993%2FwjR9tPl3t6PWHTx%2BWs3vrrWYJ%2FQs6BbeAnXfcUdAZ9lFCvtWV7jmIHr3tqsZkNCIYnoPQUWf2pDOLeYYYyoYtD2XNVr3VtR4cvBp5Wyk0oxR9F7mZorumW8TeNDQfww7Z4OsdjiOczv9KNTm6%2FKTNaDtH%2FSl5YvYg%2FtS3PB3VXwf11xPsU1n9KWEfzDnMRvn3w%2FmCact3htlDaEJ9y3OJFen7YZQJfYWj6ipBn7R0A4Wxd8hz3dJQCS4BDVBGopSRIQcFKF6TOKKV4FCtBvLpV8SWeFPXELU6oC8cRiL5t0bvctS7zFtzr6PSmA2lNHQ53D0qja5KozPsqoj3i0qNHOWzpEbl9OgX%2BiZIW9nRQ9RJzRBZjCYEA1wHsJYkRlODnHIFxwe%2BkkovimxnXVEM8jz8MJMxnSkgzd8JvQcSLQm7Hz2QqNUDibZ2KpSYlm7BfUOPcRaeGV%2FUxcA9GV8Uo%2FAHiS%2FqiilDFjcaJw09TRrMuV4f3KZCyc1sxaxhsImioZ41ZGvTKxBxgN2RmUNW72YHU8s%2FQEbhUfl3eMPrvSh%2FFV%2BsoZS%2FMSr%2Fs5V%2Fd9hnCuGvgn0o4W%2F0IfxHX9AzKRRiX%2BkLhhL7hrwg%2BSeOMfs2Jr31JRhmjTCjabUNM04HEwzqxcg0He0dqAVyLAUtrXVFQo7U4Ty1yqp2WquyzN1c3%2FSEQs1WQLPCm9HXHPc1xmBrm9PBdMe4tnm27ugOu9Z2VWMw4TEubv54zkCbtAwz2oMpDzlUccmPs4zrUXwMIz5ss6346CPjXgm8qY5WZLnwx6IUCQIRERxJxnfgDsNUYsRHGsIpy1wKh2%2BKDR7KGqxWZXRBR13QYCug86H0iDnGQc7XI90XuPRX1iP5wllfK6D8NMMAtLPzEbsVG3TGNdIhKdRSvAwWNjHlTToLNyCjbuktg3te1y3WXPYahqFaQ50MplvkPTpcLOxCylzMsPslQBEMe58Dk8uTlVAPMY95bNNBsdIvFpN6hCRu6I%2FnNukVKeIt2kvzw6AnJiLeVzbH3Vlq6tZOqd6rTeHCiutedfSPLf1j4WvOUVbKsWIPpqzkqPKorDoqq%2B6wt3WRgwkrOaqcqSOHYcSEm1GpJ59sMDtaA20Z3iJ2WXEmh2vlDlJRQ8i4SjD6SK1ix82Y8jYsb2U1p%2BStNhlMzsmR6fdIoeYq2U19aJxGaEY1MVLtN7WGUjiWHJm5j%2BW8Pxy6C%2F41ESjRKGUdWITo1HQuVVDspZljvKMqfVZPKTvYgydzqVSyv3V%2BlWjulqbCpUjZa8bJmp2cZYyJq8p%2BlhpqClepoSyjTGooBax4xjMwlKk8Zm92GpZzs47gVJOG5VDJm0pEbXlUjoh2QtTOt3Llk0nFCvzLQipHHkdIO0E6nTTcrCK96mUhlaOK19jx%2BCpDxLt1UZGQCx9%2FRaHL%2BMk7xMRHf8rzv%2B5QyCfUcYI36dESO5ixg2sQ%2F2f0SO9eyIlpP3RpuHRTET80FWyZ9iA4lQn5LVYeKirLJSigofvRI0JsXRH%2BcyLvPZdeuvkstXX6Uxv268kys5k7pT1TljUbKuKJJ2QZQID2lWqC5h1u2G6QJWvxuZpPyaYWX4zqmU3F3o6Lys6OYp%2FHqY%2FElN%2BF%2BVw91%2FtHYnIsqps4js5ZX4PiRmPCYDZfUa0p3nBydjMS3hfFLat%2Bw5PatxaHobgtM%2FoFdzD1wHJtMJbn%2Fvkky%2FPNiC%2B%2FV0kJaYtswL691oHdZSf3lj2DB2d4rbZ45gtSr%2BG17Ob6XHNzU1uvNbNONNRfvETJQlVy4kux8OfJxK4zUZvbp7io2uf4sgQ1W79WX1E52tNGFOfZBG1s5p0afREUiuUXj7Pq5Wejjct%2FAQ%3D%3D)
  
>Todos los participantes deben participar en la codificación de este ejercicio. Es importante entonces que haya evidencia de commits provenientes de todas las partes. Los commits deben seguir el siguiente estándar:
  * *NEW*: cuando se agregan nuevas funcionaliades. 
  * *MOD*: cuando se modifican funcionalidades existentes. 
  * *FIX*: cuando se arreglan errores ya existentes. 
