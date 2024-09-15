#include <stdio.h>
#include <locale.h>
#include <time.h> // Incluindo a biblioteca para trabalhar com o tempo
#include <limits.h> // Para definir o tempo recorde inicial como o máximo possível

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

int main() {
    setlocale(LC_ALL, "Portuguese");
    int score = 0;
    int OP, RT;
    double tempo_total = 0; // Variável para armazenar o tempo total
    double recorde = INT_MAX; // Inicializa o recorde com o maior valor possível

    inicio:  // Rótulo parA voltar ao início

    system("cls");
    score = 0; // Reseta a pontuação ao reiniciar o quiz
    tempo_total = 0; // Reseta o tempo total ao reiniciar o quiz
    printf("Bem-vindo ao Quiz de Ecologia!\n\n");

    // Dificuldade
    printf("Escolha uma dificuldade: \n");
    printf("\nDigite 1 -> fácil\n");
    printf("\nDigite 2 -> normal\n");
    printf("\nDigite 3 -> Dificil\n");
    scanf("%d", &OP);

    time_t inicio_tempo, fim_tempo; 
	// Variáveis para armazenar o tempo de início e fim de cada pergunta

    if (OP == 1) {
        // Pergunta 1
        printf("\nPergunta 1: “Os impactos ambientais consequentes da mineração têm sido intensos e cada vez mais têm contribuído \npara a degradação do meio ambiente.” A partir dessa temática, é INCORRETO afirmar que:\n");
        printf("\na) A operação de garimpo emprega uma volumosa quantidade de pessoas, trazendo aos países, inúmeros benefícios como:\nalta produção, controle da produção e comercialização desses metais.\n");
        printf("\nb) O uso do mercúrio nas operações de garimpo é prejudicial à fauna e à saúde do homem.\n");
        printf("\nc) A mineração e o garimpo são atividades que exercem forte influência no ambiente natural e contribuem para a sua deterioração.\n");

        time(&inicio_tempo); // Início do cronômetro
        char resposta1;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta1);
        time(&fim_tempo); // Fim do cronômetro

        tempo_total += difftime(fim_tempo, inicio_tempo); // Calcula o tempo decorrido

        if (resposta1 == 'a' || resposta1 == 'A') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é A.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio; // Retorna ao início se o usuário quiser tentar novamente
            return 0;
        }
        printf("\n");

        // Pergunta 2
        printf("Pergunta 2: A atividade econômica e industrial que consiste na pesquisa, exploração, lavra (extração) e beneficiamento\nde minérios presentes no subsolo é o/a:\n");
        printf("a) Siderurgia\n");
        printf("b) Mineração\n");
        printf("c) Estrativismo vegetal\n");

        time(&inicio_tempo); 
        char resposta2;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta2);
        time(&fim_tempo); 

        tempo_total += difftime(fim_tempo, inicio_tempo); 

        if (resposta2 == 'b' || resposta2 == 'B') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é b.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
        printf("\n");

        // Pergunta 3
        printf("Pergunta 3: Na mineração, os impactos ambientais são de grande porte e afetam vários elementos dos ecossistemas locais.\nConsiderando os impactos ambientais específicos da exploração do minério de ferro.\nMarque a alternativa que indica um deles:\n");
        printf("a) Poluição atmosférica causada pela queima necessária nas reservas como técnica de separação do minério das rochas\n");
        printf("b) Contaminação do solo em função da utilização maciça de pesticidas na fase de identificação das reservas minerais.\n");
        printf("c) Rompimento de barragens que concentram os resíduos minerais e poluição das águas superficiais.\n\n");

        time(&inicio_tempo); 
        char resposta3;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta3);
        time(&fim_tempo); 

        tempo_total += difftime(fim_tempo, inicio_tempo); 

        if (resposta3 == 'c' || resposta3 == 'C') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é c.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
        printf("\n");

        // Pergunta 4
        printf("Pergunta 4: Indique a alternativa que apresenta um impacto ambiental provocado pelas atividades minerárias:\n");
        printf("a) Formação de chuvas ácidas\n");
        printf("b) Poluição das fontes de água\n");
        printf("c) Canalização dos córregos\n\n");

        time(&inicio_tempo);
        char resposta4;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta4);
        time(&fim_tempo); // Fim do cronômetro

        tempo_total += difftime(fim_tempo, inicio_tempo);

        if (resposta4 == 'b' || resposta4 == 'B') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é b.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
        printf("\n");

        // Pergunta 5
        printf("Pergunta 5: O processo de mineração tem forte impacto no relevo de uma região. Ele tem como uma de suas consequências a formação de?\n");
        printf("a) Montanhas\n");
        printf("b) Magnetismo\n");
        printf("c) Voçorocas\n\n");

        time(&inicio_tempo);
        char resposta5;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta5);
        time(&fim_tempo);

        tempo_total += difftime(fim_tempo, inicio_tempo);

        if (resposta5 == 'c' || resposta5 == 'C') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é C.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
        
        // Pergunta 6
        printf("Pergunta 6: A mineração pode levar à contaminação de água subterrânea devido a:\n");
        printf("a) Vazamento de produtos químicos tóxicos\n");
        printf("b) Filtração de água pura nas camadas profundas do solo\n");
        printf("c) Aumento da produção de água potável\n\n");

        time(&inicio_tempo);
        char resposta6;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta6);
        time(&fim_tempo);

        tempo_total += difftime(fim_tempo, inicio_tempo);

        if (resposta6 == 'a' || resposta6 == 'A') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é A.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
        
        // Pergunta 7
        printf("Pergunta 7: Qual é um dos principais impactos da mineração sobre a biodiversidade?\n");
        printf("a) Aumento da diversidade de espécies\n");
        printf("b) Destruição de habitats naturais\n");
        printf("c) Criação de novas reservas ambientais\n\n");

        time(&inicio_tempo);
        char resposta7;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta7);
        time(&fim_tempo);

        tempo_total += difftime(fim_tempo, inicio_tempo);

        if (resposta7 == 'b' || resposta7 == 'B') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é b.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
        

        // Pergunta 8
        printf("Pergunta 8: O que é frequentemente causado pela mineração em áreas florestais?\n");
        printf("a) Reflorestamento espontâneo\n");
        printf("b) Desmatamento e perda de vegetação nativa\n");
        printf("c) Aumento da área verde\n\n");

        time(&inicio_tempo);
        char resposta8;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta8);
        time(&fim_tempo);

        tempo_total += difftime(fim_tempo, inicio_tempo);

        if (resposta8 == 'b' || resposta8 == 'B') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é b.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }

        // Pergunta 9
        printf("Pergunta 9: O que é uma consequência comum das barragens de rejeitos em atividades de mineração?\n");
        printf("a) Criação de novos habitats para a fauna\n");
        printf("b) Risco de rompimento e desastres ambientais\n");
        printf("c) Redução da contaminação ambiental\n\n");

        time(&inicio_tempo);
        char resposta9;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta9);
        time(&fim_tempo);

        tempo_total += difftime(fim_tempo, inicio_tempo);

        if (resposta9 == 'b' || resposta9 == 'B') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é b.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
         
        
        // Pergunta 10
        printf("Pergunta 10: Como a mineração contribui para o aquecimento global?\n");
        printf("a) Emitindo grandes quantidades de gases de efeito estufa\n");
        printf("b) Absorvendo mais CO2 da atmosfera\n");
        printf("c) Reduzindo as emissões de carbono\n\n");

        time(&inicio_tempo);
        char resposta10;
        printf("Escolha a, b ou c: ");
        scanf(" %c", &resposta10);
        time(&fim_tempo);

        tempo_total += difftime(fim_tempo, inicio_tempo);

        if (resposta10 == 'a' || resposta10 == 'A') {
            printf(GREEN "Correto!\n" RESET);
            score++;
        } else {
            printf(RED "Incorreto! A resposta correta é b.\n" RESET);
            printf("\nDeseja fazer novamente? Pressione 1.\n");
            printf("Se quiser sair, pressione qualquer outra tecla.\n");
            scanf("%d", &RT);
            if (RT == 1) goto inicio;
            return 0;
        }
        printf("\n");

        // Exibir pontuação final
        printf("Parabéns! Você completou o quiz de ecologia.\n");
        printf("Sua pontuação final é: %d\n", score);
        printf("Tempo total gasto: %.2f segundos\n", tempo_total);

        // Verificar e atualizar o recorde
        if (tempo_total < recorde) {
            recorde = tempo_total;
            
            printf("Novo recorde! Seu tempo foi o mais rápido até agora.\n");
        } else {
            printf("O recorde atual é: %.2f segundos\n", recorde);
        }
    }

    if (OP == 2) {
    
	//Pergunta 01
	printf("Pergunta 01: In the history of Brazil, regarding the mining cycle, it can be stated that:\n");
    printf("I) The colony's capital was transferred from Salvador to the city of Rio de Janeiro.\n");
    printf("II) For two centuries, the people of São Paulo monopolized gold exploration, despite the failed attempts of other groups.\n");
    printf("III) There was settlement and urbanization of the Minas Gerais region.\n");
    printf("Which of the following statements is/are correct:\n");
    printf("a) I\n");
    printf("b) II\n");
    printf("c) III\n");
    printf("d) I and II\n");
    printf("e) I and III\n");

    time(&inicio_tempo);
    char resposta;
    printf("Choose a, b, c, d, or e: ");
    scanf(" %c", &resposta);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (resposta == 'e' || resposta == 'E') {
        printf(GREEN "Correct!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorrect! The correct answer is e.\n" RESET);
        printf("\nDo you want to try again? Press 1.\n");
        printf("If you want to exit, press any other key.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }
    // Pergunta 02
    printf("Pergunta 02: A drenagem ácida de minas é um dos problemas ambientais mais graves associados à mineração. Qual das seguintes condições geológicas facilita a geração de drenagem ácida?\n");
    printf("a) Existência de minerais sulfetados como a pirita\n");
    printf("b) Presença de rochas ricas em carbonatos\n");
    printf("c) Alta concentração de minerais silicatados\n");
    printf("d) Abundância de minerais oxidados\n");

    time(&inicio_tempo);
    char respostaA;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaA);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaA == 'a' || respostaA == 'A') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é a.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }
    
    // Pergunta 03
    printf("Pergunta 03: Na mineração de ouro, a técnica de cianetação é amplamente utilizada para extrair o metal precioso. Qual é a principal preocupação ambiental associada ao uso de cianeto?\n");
    printf("a) Emissão de mercúrio para a atmosfera\n");
    printf("b) Contaminação de corpos d'água com resíduos cianídricos\n");
    printf("c) Liberação de partículas de sílica\n");
    printf("d) Erosão acelerada do solo\n");

    time(&inicio_tempo);
    char respostaB;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaB);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaB == 'b' || respostaB == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 04
    printf("Pergunta 04: A mineração de carvão é uma das principais fontes de emissões de gases de efeito estufa. Qual processo específico de mineração contribui para essas emissões?\n");
    printf("a) Oxidação de pirita\n");
    printf("b) Liberação de metano, um potente gás de efeito estufa\n");
    printf("c) Combustão espontânea de carvão\n");
    printf("d) Erosão do solo devido à mineração a céu aberto\n");

    time(&inicio_tempo);
    char respostaC;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaC);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaC == 'b' || respostaC == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 05
    printf("Pergunta 05: Quais das seguintes práticas podem reduzir os impactos ambientais da mineração a céu aberto?\n");
    printf("a) Aumento da profundidade das minas\n");
    printf("b) Implementação de práticas de reflorestamento e recuperação de vegetação nativa\n");
    printf("c) Expansão das áreas de mineração\n");
    printf("d) Construção de grandes reservatórios para armazenar rejeitos\n");

    time(&inicio_tempo);
    char respostaD;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaD);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaD == 'b' || respostaD == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }
    
	// Pergunta 06
    printf("Pergunta 06: ENEM 2021 Mining activities have created conflicts with extractivists, quilombola communities, small farmers, riverside dwellers, artisanal fishers, and indigenous peoples. In general, these groups have found it very difficult to maintain their territorial dynamics after the establishment of mining activities, often without acknowledgment of the impact on their territories by the State or the company, leaving them without any form of economic compensation. In other cases, not even economic compensation has been able to prevent the deterioration of the social relations of these groups, who suffer from the abrupt reconstruction of their identities and territorial dynamics. The text presents a relationship between economic activity and social organization marked by\n");
    printf("a) scarcity of cultural incentives.\n");
    printf("b) rupture of local bonds.\n");
    printf("c) lack of financial investment.\n");
    printf("d) enrichment of indigenous communities.\n");

    time(&inicio_tempo);
    char respostaE;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaE);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaE == 'b' || respostaE == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 7
    printf("Pergunta 07: A mineração submarina é uma prática emergente com sérias implicações ambientais. Qual é o impacto mais significativo associado a esta atividade?\n");
    printf("a) Aumento da poluição sonora nos oceanos\n");
    printf("b) Destruição de habitats marinhos, como recifes de corais e pradarias submarinas\n");
    printf("c) Acidificação dos oceanos\n");
    printf("d) Aumento da temperatura das águas profundas\n");

    time(&inicio_tempo);
    char respostaF;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaF);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaF == 'b' || respostaF == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 8
    printf("Pergunta 08: A mineração de urânio, usada na produção de energia nuclear, apresenta riscos ambientais específicos. Qual desses riscos é o mais significativo?\n");
    printf("a) Emissão de CO2 durante a extração\n");
    printf("b) Liberação de elementos radioativos e metais pesados no meio ambiente\n");
    printf("c) Contaminação da cadeia alimentar por mercúrio\n");
    printf("d) Aumento do risco de desastres sísmicos\n");

    time(&inicio_tempo);
    char respostaG;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaG);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaG == 'b' || respostaG == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 9
    printf("Question 09:  In the history of Brazil, regarding the mining cycle, it can be stated that:\n");
    printf("I) The colony's capital was transferred from Salvador to the city of Rio de Janeiro.\n");
    printf("II) For two centuries, the people of São Paulo monopolized gold exploration, despite the failed attempts of other groups.\n");
    printf("III) There was settlement and urbanization of the Minas Gerais region.\n");
    printf("Which of the following statements is/are correct:\n");
    printf("a) I\n");
    printf("b) II\n");
    printf("c) III\n");
    printf("d) I and II\n");
    printf("e) I and III\n");

    time(&inicio_tempo);
    char respostaH;
    printf("Choose a, b, c, d, or e: ");
    scanf(" %c", &respostaH);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaH == 'e' || respostaH == 'E') {
        printf(GREEN "Correct!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorrect! The correct answer is e.\n" RESET);
        printf("\nDo you want to try again? Press 1.\n");
        printf("If you want to exit, press any other key.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }


    // Pergunta 10
    printf("Pergunta 10: Na gestão de resíduos de mineração de urânio, uma das maiores preocupações é a segurança a longo prazo. Qual das seguintes ações é crucial para mitigar os riscos ambientais associados aos resíduos radioativos?\n");
    printf("a) Construção de barragens de contenção de rejeitos\n");
    printf("b) Estabilização e cobertura das pilhas de rejeitos radioativos\n");
    printf("c) Incineração dos resíduos para reduzir o volume\n");
    printf("d) Diluição dos rejeitos em grandes massas de água\n");

    time(&inicio_tempo);
    char respostaI;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaI);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaI == 'b' || respostaI == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 11
    printf("Pergunta 11: Qual das seguintes técnicas de remediação ambiental é mais eficaz na recuperação de solos contaminados por metais pesados resultantes da mineração?\n");
    printf("a) Fitorremediação, que envolve o uso de plantas para absorver os contaminantes\n");
    printf("b) Uso de barreiras físicas para isolar a contaminação\n");
    printf("c) Adição de calcário para neutralizar a acidez do solo\n");
    printf("d) Injeção de produtos químicos para precipitar os metais\n");

    time(&inicio_tempo);
    char respostaJ;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaJ);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaJ == 'a' || respostaJ == 'A') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é a.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 12
    printf("Pergunta 12: A fragmentação de habitats é um impacto ambiental indireto da mineração. Qual dos seguintes efeitos resulta diretamente dessa fragmentação?\n");
    printf("a) Redução dos níveis de poluição da água\n");
    printf("b) Fragmentação de habitats, levando à perda de espécies endêmicas\n");
    printf("c) Aumento da biodiversidade local\n");
    printf("d) Expansão das áreas de vegetação secundária\n");

    time(&inicio_tempo);
    char respostaK;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaK);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaK == 'b' || respostaK == 'B') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é b.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }
	//Pergunta 13
	printf("Question 13: (PUC – SP) \nThus conspire the prophets, in a fantastic gathering, beaten by the airs of Minas. Where else could we conceive such a meeting, if not in Minas land, which is the very paradox, so mystical that it transforms into altarpieces, pulpits, and kneelers the coarse fever of diamonds, gold, and precious stones?\" (ANDRADE, Carlos Drummond de. Colloquy of the Statues. In: MELLO, S. Baroque Minas. São Paulo: Brasiliense, 1985.)\n");
    printf("The origin of this contradictory trait that the poet claims characterizes the society of Minas refers to a context in which there was:\n");
    printf("a) The bilateral reaffirmation of the Treaty of Tordesillas between Portugal and Spain and the growth of racial miscegenation in the colonial environment.\n");
    printf("b) The decline in land distribution politics in the colony and the prevalence of a rationalist conception of city planning.\n");
    printf("c) The diversification of productive activities in the colony and the construction of an artistic and architectural ensemble that characterized the main mining region.\n");
    printf("d) The shift of the productive axis from the northeast to the central regions of the colony and the development of an aesthetic that sought to reproduce European Romanesque constructions.\n");
    printf("e) The expansion of Brazilian colonial territory and the introduction, in Minas, of art known as Gothic, especially in the decoration of church interiors.\n");

    time(&inicio_tempo);
    char respostaSociedade;
    printf("Choose a, b, c, d, or e: ");
    scanf(" %c", &respostaSociedade);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaSociedade == 'c' || respostaSociedade == 'C') {
        printf(GREEN "Correct!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorrect! The correct answer is c.\n" RESET);
        printf("\nDo you want to try again? Press 1.\n");
        printf("If you want to exit, press any other key.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 14
    printf("Pergunta 14: (Enem 2011) Uma empresa de mineração possui um terreno vazio no formato retangular, cujo perímetro é 40 m, onde se pretende realizar uma única construção que aproveite ao máximo a área disponível para a instalação de equipamentos e infraestrutura. Após a análise realizada por um engenheiro, este concluiu que, para atingir o máximo de área útil do terreno com uma única construção, a obra ideal serian");
    printf("a) Um galpão de armazenamento com 8 m\n");
    printf("b) Uma área de manutenção com 16 m²\n");
    printf("c) Um centro de controle com 36 m².\n");
    printf("d) um depósito de materiais com 100 m².\n");

    time(&inicio_tempo);
    char respostaL;
    printf("Escolha a, b, c, ou d: ");
    scanf(" %c", &respostaL);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaL == 'c' || respostaL == 'C') {
        printf(GREEN "Correto!\n" RESET);
        score += 2;
    } else {
        printf(RED "Incorreto! A resposta correta é a.\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

	// Question 15
	printf("Question 15: In addition to environmental impacts, mining can generate serious socioeconomic consequences. What is one of these consequences?\n");
	printf("a) Decrease in territorial conflicts\n");
	printf("b) Increase in social and economic inequality\n");
	printf("c) Sustainable growth of the local economy\n");
	printf("d) Improvement in working conditions in mining communities\n");

	time(&inicio_tempo);
	char respostaM;
	printf("Choose a, b, c, or d: ");
	scanf(" %c", &respostaM);
	time(&fim_tempo);

	tempo_total += difftime(fim_tempo, inicio_tempo);

	if (respostaM == 'b' || respostaM == 'B') {
	    printf(GREEN "Correct!\n" RESET);
	    score += 2;
		} else {
	    printf(RED "Incorrect! The correct answer is b.\n" RESET);
	    printf("\nDo you want to try again? Press 1.\n");
	    printf("If you want to exit, press any other key.\n");
	    scanf("%d", &RT);
	   	if (RT == 1) goto inicio;
	    return 0;
		}
	
	   	printf("Parabéns! Você completou o quiz de ecologia.\n");
        printf("Sua pontuação final é: %d\n", score);
        printf("Tempo total gasto: %.2f segundos\n", tempo_total);

        // Verificar e atualizar o recorde
        if (tempo_total < recorde) {
            recorde = tempo_total;
            
            printf("Novo recorde! Seu tempo foi o mais rápido até agora.\n");
        } else {
            printf("O recorde atual é: %.2f segundos\n", recorde);
        }
		
    }

if (OP == 3) {
	// Pergunta 1
    printf("Question: An iron mine has a mineral deposit in the shape of a rectangular prism. The deposit has the following dimensions:\n");
    printf("Length: 50 meters\n");
    printf("Width: 30 meters\n");
    printf("Height: 20 meters\n");
    printf("The mineral has a density of 2.5 tons per cubic meter.\n");
    printf("The mining company is planning to fully extract the deposit. To estimate the total amount of mineral that can be extracted, it is necessary to calculate the total mass of the mineral in the deposit.\n");
    printf("What is the total mass of the mineral in the deposit?\n");
    printf("a) 1,500 tons\n");
    printf("b) 3,000 tons\n");
    printf("c) 7,500 tons\n");
    printf("d) 15,000 tons\n");
    printf("e) 30,000 tons\n");

    time(&inicio_tempo);
    char respostaQ;
    printf("Escolha a, b, c, d, ou e: ");
    scanf(" %c", &respostaQ);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaQ == 'c' || respostaQ == 'C') {
        printf(GREEN "Correto!\n" RESET);
        score += 6;
    } else {
        printf(RED "Incorreto!\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }
	//Pergunta 2
    printf("\nQuestion: After an accident at a mine, a pollutant is released into a river and disperses at a constant rate. If the pollutant is released at a rate of 5 cubic meters per hour and the release lasts for 8 hours, what is the total volume of pollutant dispersed?\n");
    printf("a) 20 cubic meters\n");
    printf("b) 30 cubic meters\n");
    printf("c) 40 cubic meters\n");
    printf("d) 45 cubic meters\n");
    printf("e) 50 cubic meters\n");

    time(&inicio_tempo);
    char respostaPoluenete;
    printf("Choose a, b, c, d, or e: ");
    scanf(" %c", &respostaPoluenete);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaPoluenete == 'c' || respostaPoluenete == 'C') {
        printf(GREEN "Correct!\n" RESET);
        score += 6;
    } else {
        printf(RED "Incorrect!\n" RESET);
        printf("\nDo you want to try again? Press 1.\n");
        printf("If you want to exit, press any other key.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

    // Pergunta 3
    printf("\nQuestion: A mining company needs to decide between two methods of ore extraction. Method A has a fixed cost of R$ 200,000.00 and a variable cost of R$ 30.00 per ton extracted. Method B has a fixed cost of R$ 150,000.00 and a variable cost of R$ 40.00 per ton extracted. Which method is more economical for extracting 2,000 tons of ore?\n");
    printf("a) Method A is more economical\n");
    printf("b) Method B is more economical\n");
    printf("c) Both have the same cost\n");
    printf("d) It is not possible to determine with the information provided\n");
    printf("e) The cost depends on the amount of ore extracted\n");
    
    time(&inicio_tempo);
    char respostaCusto;
    printf("Escolha a, b, c, d, ou e: ");
    scanf(" %c", &respostaCusto);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaCusto == 'b' || respostaCusto == 'b') {
        printf(GREEN "Correto!\n" RESET);
        score += 6;
    } else {
        printf(RED "Incorreto!\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }
    
    //Question 4
	printf("\nQuestion: A tractor was purchased on 01/01/X1 by a mining company for use in excavation activities. After X years from the purchase, the company's accounting department calculates that the machinery has depreciated according to the function: f(x) = f0 * 0.2 - 0.2x, where f0 is the initial value of the tractor.\n");
    printf("After depreciating for 10 years, the partners of the mining company decided to sell the tractor for R$ 12,000.00.\n");
    printf("Based on the information provided, which assertive presents the correct purchase value of the tractor on 01/01/X1?\n");
    printf("a) R$ 23,000.00\n");
    printf("b) R$ 62,000.00\n");
    printf("c) R$ 35,000.00\n");
    printf("d) R$ 40,000.00\n");
    printf("e) R$ 48,000.00\n");
    
    time(&inicio_tempo);
    char respostaTrator;
    printf("Escolha a, b, c, d, ou e: ");
    scanf(" %c", &respostaTrator);
    time(&fim_tempo);

    tempo_total += difftime(fim_tempo, inicio_tempo);

    if (respostaTrator == 'd' || respostaTrator == 'D') {
        printf(GREEN "Correto!\n" RESET);
        score += 6;
    } else {
        printf(RED "Incorreto!\n" RESET);
        printf("\nDeseja fazer novamente? Pressione 1.\n");
        printf("Se quiser sair, pressione qualquer outra tecla.\n");
        scanf("%d", &RT);
        if (RT == 1) goto inicio;
        return 0;
    }

	// Question 5
    printf("\nQuestion: After an accident at a mine, a pollutant is released into a river and disperses at a constant rate. If the pollutant is released at a rate of 5 cubic meters per hour and the release lasts for 8 hours, what is the total volume of pollutant dispersed?\n");
    printf("a) 20 cubic meters\n");
    printf("b) 30 cubic meters\n");
    printf("c) 40 cubic meters\n");
    printf("d) 45 cubic meters\n");
    printf("e) 50 cubic meters\n");

	time(&inicio_tempo);
	char respostaPoluente2;
	printf("Choose a, b, c, d or e: ");
	scanf(" %c", &respostaPoluente2);
	time(&fim_tempo);

	tempo_total += difftime(fim_tempo, inicio_tempo);

	if (respostaPoluente2 == 'c' || respostaPoluente2 == 'C') {
	    printf(GREEN "Correct!\n" RESET);
	    score += 6;
		} else {
	    printf(RED "Incorrect!\n" RESET);
	    printf("\nDo you want to try again? Press 1.\n");
	    printf("If you want to exit, press any other key.\n");
	    scanf("%d", &RT);
	   	if (RT == 1) goto inicio;
	    return 0;
		}
	
	   	printf("Parabéns! Você completou o quiz de ecologia.\n");
        printf("Sua pontuação final é: %d\n", score);
        printf("Tempo total gasto: %.2f segundos\n", tempo_total);

        // Verificar e atualizar o recorde
        if (tempo_total < recorde) {
            recorde = tempo_total;
            
            printf("Novo recorde! Seu tempo foi o mais rápido até agora.\n");
        } else {
            printf("O recorde atual é: %.2f segundos\n", recorde);
        }

		
    }

}


    
